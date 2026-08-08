	@ data/maps/MtPyre_3F/scripts.inc:92 MtPyre_3F_Text_GabriellePostRematch
	.globl gText_Rom_21682B
gText_Rom_21682B: @ 0x0821682B
	.string "いまはもう いない ポケモン\nいま いっしょに いる ポケモン\pそれに\nこれから であう ポケモン……\pすべて たいせつな ポケモン なのよ\nおぼえて くれて いたのね$"
	.if (. - gText_Rom_21682B) > 0x55
	.error "gText_Rom_21682B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21682B) < 0x55
	.space 0x55 - (. - gText_Rom_21682B)
	.endif
	@ Embedded ROM bytes: file offset 0x216880, size 0x18
	.byte 0x00, 0x5C, 0x00, 0xBE, 0x00, 0x00, 0x00, 0x98, 0x68, 0x21, 0x08, 0xBC, 0x68, 0x21, 0x08, 0x0F
	.byte 0x00, 0xCE, 0x68, 0x21, 0x08, 0x09, 0x06, 0x02
