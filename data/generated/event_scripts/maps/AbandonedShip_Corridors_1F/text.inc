	@ data/maps/AbandonedShip_Corridors_1F/scripts.inc:13 AbandonedShip_Corridors_1F_Text_CharlieIntro (+1 aliases)
	.globl AbandonedShip_Corridors_1F_Text_CharlieIntro
AbandonedShip_Corridors_1F_Text_CharlieIntro: @ 0x0821A99D
	.string "ふねの なかでも\nうきわ もっていたら おかしい?"
	.byte EOS
	.if (. - AbandonedShip_Corridors_1F_Text_CharlieIntro) > 0x1a
	.error "AbandonedShip_Corridors_1F_Text_CharlieIntro may not grow beyond its original slot"
	.endif
	.if (. - AbandonedShip_Corridors_1F_Text_CharlieIntro) < 0x1a
	.space 0x1a - (. - AbandonedShip_Corridors_1F_Text_CharlieIntro)
	.endif
	@ data/maps/AbandonedShip_Corridors_1F/scripts.inc:16 AbandonedShip_Corridors_1F_Text_CharlieDefeat (+1 aliases)
	.globl AbandonedShip_Corridors_1F_Text_CharlieDefeat
AbandonedShip_Corridors_1F_Text_CharlieDefeat: @ 0x0821A9B7
	.string "うわぁ つよーい!"
	.byte EOS
	.if (. - AbandonedShip_Corridors_1F_Text_CharlieDefeat) > 0xa
	.error "AbandonedShip_Corridors_1F_Text_CharlieDefeat may not grow beyond its original slot"
	.endif
	.if (. - AbandonedShip_Corridors_1F_Text_CharlieDefeat) < 0xa
	.space 0xa - (. - AbandonedShip_Corridors_1F_Text_CharlieDefeat)
	.endif
	@ data/maps/AbandonedShip_Corridors_1F/scripts.inc:19 AbandonedShip_Corridors_1F_Text_CharliePostBattle
	.globl AbandonedShip_Corridors_1F_Text_CharliePostBattle
AbandonedShip_Corridors_1F_Text_CharliePostBattle: @ 0x0821A9C1
	.string "うきわを もったままだと\nモンスターボール なげにくいよ"
	.byte EOS
	.if (. - AbandonedShip_Corridors_1F_Text_CharliePostBattle) > 0x1d
	.error "AbandonedShip_Corridors_1F_Text_CharliePostBattle may not grow beyond its original slot"
	.endif
	.if (. - AbandonedShip_Corridors_1F_Text_CharliePostBattle) < 0x1d
	.space 0x1d - (. - AbandonedShip_Corridors_1F_Text_CharliePostBattle)
	.endif
	@ data/maps/AbandonedShip_Corridors_1F/scripts.inc:22 AbandonedShip_Corridors_1F_Text_IsntItFunHere
	.globl AbandonedShip_Corridors_1F_Text_IsntItFunHere
AbandonedShip_Corridors_1F_Text_IsntItFunHere: @ 0x0821A9DE
	.string "ここって おもしろいね!\nいるだけで ワクワク してくるよ!"
	.byte EOS
	.if (. - AbandonedShip_Corridors_1F_Text_IsntItFunHere) > 0x1f
	.error "AbandonedShip_Corridors_1F_Text_IsntItFunHere may not grow beyond its original slot"
	.endif
	.if (. - AbandonedShip_Corridors_1F_Text_IsntItFunHere) < 0x1f
	.space 0x1f - (. - AbandonedShip_Corridors_1F_Text_IsntItFunHere)
	.endif
	@ Embedded ROM bytes: file offset 0x21A9FD, size 0x83
	.byte 0x00, 0x0F, 0x00, 0x80, 0xAA, 0x21, 0x08, 0x09, 0x02, 0x02, 0x5C, 0x00, 0x77, 0x01, 0x00, 0x00
	.4byte AbandonedShip_Rooms_1F_Text_DemetriusIntro
	.4byte AbandonedShip_Rooms_1F_Text_DemetriusDefeat
	.byte 0x0F, 0x00, 0xC0, 0xAB, 0x21, 0x08, 0x09, 0x06
	.byte 0x02, 0x5C, 0x02, 0x90, 0x00, 0x00, 0x00, 0xB8, 0xAA, 0x21, 0x08, 0xD3, 0xAA, 0x21, 0x08, 0x4A
	.byte 0xAA, 0x21, 0x08, 0x26, 0x0D, 0x80, 0x39, 0x00, 0x21, 0x0D, 0x80, 0x01, 0x00, 0x06, 0x01, 0x69
	.byte 0xAA, 0x21, 0x08, 0x0F, 0x00, 0xE9, 0xAA, 0x21, 0x08, 0x09, 0x04, 0x6C, 0x02, 0x25, 0x04, 0x02
	.byte 0x51, 0x00, 0x00, 0x0F, 0x00
	.4byte AbandonedShip_Rooms_1F_Text_ThaliaRegister
	.byte 0x09, 0x04, 0x16, 0x04, 0x80, 0x90, 0x00
	.byte 0x25, 0xE6, 0x01, 0x1A, 0x00, 0x80, 0x90, 0x00, 0x09, 0x08, 0x6C, 0x02, 0x5C, 0x05, 0x90, 0x00
	.byte 0x00, 0x00
	.4byte AbandonedShip_Rooms_1F_Text_ThaliaRematchIntro
	.4byte AbandonedShip_Rooms_1F_Text_ThaliaRematchDefeat
	.byte 0x0F, 0x00
	.4byte AbandonedShip_Rooms_1F_Text_ThaliaPostRematch
	.byte 0x09, 0x06, 0x02
