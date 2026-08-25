	@ data/maps/AbandonedShip_Rooms_B1F/scripts.inc:13 AbandonedShip_Rooms_B1F_Text_GettingQueasy
	.globl AbandonedShip_Rooms_B1F_Text_GettingQueasy
AbandonedShip_Rooms_B1F_Text_GettingQueasy: @ 0x0821AD90
	.string "うぅ……\pなんだか ふねの なかに いるだけで\nよってきちゃった……\pふねは ちっとも うごいてないのに……"
	.byte EOS
	.if (. - AbandonedShip_Rooms_B1F_Text_GettingQueasy) > 0x37
	.error "AbandonedShip_Rooms_B1F_Text_GettingQueasy may not grow beyond its original slot"
	.endif
	.if (. - AbandonedShip_Rooms_B1F_Text_GettingQueasy) < 0x37
	.space 0x37 - (. - AbandonedShip_Rooms_B1F_Text_GettingQueasy)
	.endif
	@ Embedded ROM bytes: file offset 0x21ADC7, size 0xA
	.byte 0x00, 0x0F, 0x00, 0xD1, 0xAD, 0x21, 0x08, 0x09, 0x02, 0x02
