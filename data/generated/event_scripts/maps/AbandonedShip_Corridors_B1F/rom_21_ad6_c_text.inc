	@ data/maps/AbandonedShip_Corridors_B1F/scripts.inc:74 AbandonedShip_Text_TheDoorIsOpen
	.globl AbandonedShip_Text_TheDoorIsOpen
AbandonedShip_Text_TheDoorIsOpen: @ 0x0821AD6C
	.string "とびらは あいている!"
	.byte EOS
	.if (. - AbandonedShip_Text_TheDoorIsOpen) > 0xc
	.error "AbandonedShip_Text_TheDoorIsOpen may not grow beyond its original slot"
	.endif
	.if (. - AbandonedShip_Text_TheDoorIsOpen) < 0xc
	.space 0xc - (. - AbandonedShip_Text_TheDoorIsOpen)
	.endif
	@ Embedded ROM bytes: file offset 0x21AD78, size 0x18
	.byte 0x05, 0x7E, 0xAD, 0x21, 0x08, 0x00, 0x40, 0x18, 0x40, 0xFF, 0x11, 0x00, 0x04, 0x00, 0x02, 0x0F
	.byte 0x00, 0x90, 0xAD, 0x21, 0x08, 0x09, 0x02, 0x02
