# Smart Pet Kennel

A system designed to dispense pet food and water, along with a cleaning mechanism, controlled by an ESP32-Cam module. The code is written in C++ and C language.

## Installation

To set up the Smart Pet Kennel, follow these steps:

1. Install the Arduino IDE editor.
2. Add the ESP32 boards in the Board Manager. You can do this by adding the ESP32 board URL in the Arduino IDE preferences:
   - Open Arduino IDE.
   - Go to File > Preferences.
   - Enter the following URL in the "Additional Boards Manager URLs" field:
     ```
     https://github.com/espressif/arduino-esp32/releases/download/1.0.6/package_esp32_index.json
     ```
   - Click OK.
   - Go to Tools > Board > Boards Manager.
   - Search for "esp32" and install the latest version.
3. Ensure the `ESP.ino` and `ESP32Header.h` files are in the same directory.
4. Before uploading, open `ESP32Header.h` and change the SSID and password to match your Wi-Fi network credentials:
   ```cpp
   const char * SSID = "Your Network(SSID) Name";
   const char * PASSWORD = "Your Network Password";

3. Connect your ESP32-Cam module and upload the code.

## Usage

The Smart Pet Kennel operates as follows:

- The system uses a servo motor to open and close the lid of the pet food storage container.
- Two water pumps are utilized: one for dispensing drinking water and the other for cleaning the area.
- Users can control the system remotely through the ESP32-Cam module.

## Features

- Automated dispensing of pet food and water.
- Cleaning mechanism for maintaining a hygienic environment.
- Remote control functionality via the ESP32-Cam module.

## Contributing

Contributions to the Smart Pet Kennel project are welcome! For major changes, please open an issue first to discuss the proposed changes.

## License

This project is licensed under the Creative Commons Legal Code CC0 1.0 Universal. For more information, see the [LICENSE](LICENSE) file.

## Contact Information

For inquiries or further information, you can reach out via Instagram:
[jeoff_george_giby](https://www.instagram.com/jeoff_george_giby/)

## Additional Information

The project circuit diagram will be added later.
