#define PART_BOUNDARY "123456789000000000000987654321"
#define PWDN_GPIO_NUM     32
#define RESET_GPIO_NUM    -1
#define XCLK_GPIO_NUM      0
#define SIOD_GPIO_NUM     26
#define SIOC_GPIO_NUM     27
#define Y9_GPIO_NUM       35
#define Y8_GPIO_NUM       34
#define Y7_GPIO_NUM       39
#define Y6_GPIO_NUM       36
#define Y5_GPIO_NUM       21
#define Y4_GPIO_NUM       19
#define Y3_GPIO_NUM       18
#define Y2_GPIO_NUM        5
#define VSYNC_GPIO_NUM    25
#define HREF_GPIO_NUM     23
#define PCLK_GPIO_NUM     22

const unsigned short PORT = 80;
const char * SSID = "Your Network(SSID) Name";
const char * PASSWORD = "Your Network Password";

const char INDEX_HTML[] PROGMEM = R"rawliteral(
<!DOCTYPE html>
<html>
<head>
  <title>Dog Food Dispenser</title>
  <style>
    body {
      font-family: Arial, sans-serif;
      text-align: center;
    }
    h1 {
      color: #333;
    }
    button {
      background-color: #4CAF50;
      border: none;
      color: white;
      padding: 15px 32px;
      text-align: center;
      text-decoration: none;
      display: inline-block;
      font-size: 16px;
      margin: 4px 2px;
      cursor: pointer;
      border-radius: 8px;index_html
      transition: background-color 0.3s ease;
      animation: scaleIn 0.5s ease;
    }
    button:hover {
      background-color: #45a049;
    }
    #videoContainer {
      animation: scaleIn 0.5s ease;
    }
    #connectionStatus {
      font-weight: bold;
      margin-top: 10px;
    }
    @keyframes scaleIn {
      from {
        transform: scale(0.5);
        opacity: 0;
      }
      to {
        transform: scale(1);
        opacity: 1;
      }
    }
  </style>
</head>
<body>
  <h1>Dog Food Dispenser Control</h1>
  <button onclick="route(0)" id="dispenseButton">Dispense Dog Food</button>
  <button onclick="route(1)" id="drinkingWaterButton">Dispense Drinking Water</button>
  <button onclick="route(2)" id="cleanButton">Clean The Area</button>
  <button onclick="route(3)" id="light">Flash On</button>
  <button onclick="route(4)" id="lightoff">Flash Off</button>
  <div id="connectionStatus"></div>
  <div id="videoContainer">
    <h2>Live Video Stream</h2>
    <img src="" id="videoStream" width="640" height="480">
  </div>

  <script>
    function route(R)
    {
        var buffer = new XMLHttpRequest();
        if (R == 0)
        {
          R = "dispense";
        }
        else if (R == 1)
        {
          R = "drinking";
        }
        else if (R == 2)
        {
          R = "cleaning"
        }
        else if (R == 3)
        {
          R = "flash"
        }
        else {
          R="flashoff"
          }
        console.log(R);
        buffer.open("GET", "/action?go=" + R, true);
        buffer.send();
    }
    window.onload = document.getElementById("videoStream").src = window.location.href.slice(0, -1) + ":81/stream";
  </script>
</body>
</html>
)rawliteral";
