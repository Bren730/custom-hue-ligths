# custom-hue-ligths

# Installation
Install Beyond Studio for NXP (https://www.nxp.com/products/wireless/zigbee/zigbee/zigbee-light-link:ZIGBEE-LIGHT-LINK?&fsrch=1&sr=1&pageNum=1)
After installing Beyond studio, install the JN516x SDK by launching the JN516x SDK installer (.exe)
Finally, install the ZigBee Plug-ins. Start Beyond Studio for NXP. Go to Help>Install New Software. In the Available Software screen, click the Add… button. An Add Respository window will be displayed. Click the Local… button and browse to the plug-ins’ sub-folder of the installed SDK - for example: C:\NXP\bstudio_nxp\sdk\JN-SW-4168\Tools\Eclipse_plugins\com.nxp.sdk.update_site. In the Available Software screen, expand Jennic ZBPro SDK and ensure that the checkboxes for Jennic RTOS Configuration Editor and Jennic ZBPro Configuration Editor are ticked. Click Next > to continue. During the installation process, a screen may appear to ask you to accept the installation of unsigned content. If you agree, click OK to continue. Restart Beyond Studio for NXP.

If your workspace is outside of the Installation Folder
Go to Project>Properties. In NXP JN516x Application>Target Stack, tick the "Set stack environment variables". Click Apply and OK.

# Importing the project
First go to Window>Preferences. Then under C/C++>Indexer tuck "Use active build configuration" in the "Build configuration for the indexer" section. Click Apply, then OK.
Go to File>Import, then select General>Existing Projects Into Workspace. Click Next
If you want to import the JN-AN-1171 demo project from NXP, then select the "Select archive file" and point it to the .zip. If you want to import the project in this GitHub repo, select "Select root directory" and point it to the root folder of this repo. Uncheck "Copy projects into workspace" if you want to keep using Git to track changes.
To rename the project, right-click the root folder in the Project Explorer pane and click "Rename".

# Building
I have added the SDK to this project and changed the Common_Light/Build/Makefile to SDK_BASE_DIR = $(abspath ../../sdk/$(JENNIC_SDK)). That way it references the sdk in the root folder of this repo. Make sure you copy the "sdk" folder from C:\NXP\bstudio_nxp to the root of this repo.

# Flashing a device
Go to Devices>Program device. Select the right COM port and set the baud rate to 1000000 (default). Cick on "Workspace" or "File system" to select a binary to flash. Leave EEPROM at Erase PDM. Click "Program"
Erase PDM to delete all persistent data records from EEPROM
Erase EEPROM to delete all the contents of EEPROM
Preserve EEPROM to keep all the contents of EEPROM
Load EEPROM to load/replace data in EEPROM (in this case, navigate to the data file to be loaded - if this file is in your workspace, use the Workspace button, otherwise use the File System button)