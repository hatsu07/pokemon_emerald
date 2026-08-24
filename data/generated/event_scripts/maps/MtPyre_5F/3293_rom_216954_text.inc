	@ data/maps/MtPyre_5F/scripts.inc:11 MtPyre_4F_Text_TashaIntro (+1 aliases)
	.globl MtPyre_4F_Text_TashaIntro
MtPyre_4F_Text_TashaIntro: @ 0x08216912
	.string "こわいものが すきで……\nすきで すきで たまらない……\pあたし ここに いると\nこわくて ふるえるの……{EOS}"
	.if (. - MtPyre_4F_Text_TashaIntro) > 0x36
	.error "MtPyre_4F_Text_TashaIntro may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_4F_Text_TashaIntro) < 0x36
	.space 0x36 - (. - MtPyre_4F_Text_TashaIntro)
	.endif
	@ data/maps/MtPyre_5F/scripts.inc:17 MtPyre_4F_Text_TashaDefeat (+1 aliases)
	.globl MtPyre_4F_Text_TashaDefeat
MtPyre_4F_Text_TashaDefeat: @ 0x08216948
	.string "まけるのは きらい……{EOS}"
	.if (. - MtPyre_4F_Text_TashaDefeat) > 0xc
	.error "MtPyre_4F_Text_TashaDefeat may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_4F_Text_TashaDefeat) < 0xc
	.space 0xc - (. - MtPyre_4F_Text_TashaDefeat)
	.endif
	@ data/maps/MtPyre_5F/scripts.inc:20 MtPyre_4F_Text_TashaPostBattle
	.globl MtPyre_4F_Text_TashaPostBattle
MtPyre_4F_Text_TashaPostBattle: @ 0x08216954
	.string "こわいもの みたさで\nここから はなれられないの……\pねえ……\nあなたも いっしょに いない……?{EOS}"
	.if (. - MtPyre_4F_Text_TashaPostBattle) > 0x32
	.error "MtPyre_4F_Text_TashaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_4F_Text_TashaPostBattle) < 0x32
	.space 0x32 - (. - MtPyre_4F_Text_TashaPostBattle)
	.endif
	@ Embedded ROM bytes: file offset 0x216986, size 0x7A
	@ semanticized-mass: resolved embedded ROM pointers
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x00, 0x5C, 0x02, 0x6C, 0x00, 0x00, 0x00
	.4byte MtPyre_6F_Text_ValerieIntro @ ROM pointer 0x08216A00
	.4byte MtPyre_6F_Text_ValerieDefeat @ ROM pointer 0x08216A1E
	.byte 0xB3, 0x69, 0x21, 0x08, 0x26, 0x0D, 0x80, 0x39, 0x00, 0x21, 0x0D, 0x80, 0x01, 0x00, 0x06, 0x01
	.byte 0xD2, 0x69, 0x21, 0x08, 0x0F, 0x00
	.4byte MtPyre_6F_Text_ValeriePostBattle @ ROM pointer 0x08216A2B
	.byte 0x09, 0x04, 0x6C, 0x02, 0x25, 0x04, 0x02, 0x51, 0x00, 0x00, 0x0F, 0x00
	.4byte MtPyre_6F_Text_ValerieRegister @ ROM pointer 0x08216A52
	.byte 0x09, 0x04, 0x16, 0x04, 0x80, 0x6C, 0x00, 0x25, 0xE6, 0x01, 0x1A, 0x00, 0x80, 0x6C, 0x00, 0x09
	.byte 0x08, 0x6C, 0x02, 0x5C, 0x05, 0x6C, 0x00, 0x00, 0x00, 0x9E, 0x6A, 0x21, 0x08, 0xB4, 0x6A, 0x21
	.byte 0x08, 0x0F, 0x00, 0xC0, 0x6A, 0x21, 0x08, 0x09, 0x06, 0x02, 0x5C, 0x00, 0xDB, 0x01, 0x00, 0x00
	.4byte MtPyre_6F_Text_CedricIntro @ ROM pointer 0x08216AE8
	.4byte MtPyre_6F_Text_CedricDefeat @ ROM pointer 0x08216B06
	.byte 0x0F, 0x00, 0x14, 0x6B, 0x21, 0x08, 0x09, 0x06, 0x02
