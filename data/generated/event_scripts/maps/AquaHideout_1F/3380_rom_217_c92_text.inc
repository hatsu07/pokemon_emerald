	@ data/maps/AquaHideout_1F/scripts.inc:53 AquaHideout_1F_Text_OurBossIsSnatchingSomething
	.globl AquaHideout_1F_Text_OurBossIsSnatchingSomething
AquaHideout_1F_Text_OurBossIsSnatchingSomething: @ 0x082179BF
	.string "なんだ なんだ!\nおれたち アクアだんに なんの ようだ!\pリーダーだったら いま だいじな ものを\nぶんどりに でかけていて るすだぞ!\p……どこに いったのか だって?\pわはははっ! そんな だいじな ことを\nおしえられる わけ ないだろうが!{EOS}"
	.if (. - AquaHideout_1F_Text_OurBossIsSnatchingSomething) > 0x7d
	.error "AquaHideout_1F_Text_OurBossIsSnatchingSomething may not grow beyond its original slot"
	.endif
	.if (. - AquaHideout_1F_Text_OurBossIsSnatchingSomething) < 0x7d
	.space 0x7d - (. - AquaHideout_1F_Text_OurBossIsSnatchingSomething)
	.endif
	@ data/maps/AquaHideout_1F/scripts.inc:56 AquaHideout_1F_Text_WhereMightMagmaHideoutBe
	.globl gText_Rom_217A3C
gText_Rom_217A3C: @ 0x08217A3C
	.string "なんだ なんだ!\nおまえは マグマだんの したっぱか!?\pマグマだんめ アジトで すごいポケモンを\nめざめさせる つもり らしいな!\pえーい! アジトは\nいったい どこに あるって いうんだ!{EOS}"
	.if (. - gText_Rom_217A3C) > 0x61
	.error "gText_Rom_217A3C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_217A3C) < 0x61
	.space 0x61 - (. - gText_Rom_217A3C)
	.endif
	@ data/maps/AquaHideout_1F/scripts.inc:59 AquaHideout_1F_Text_BossWentToJackASubmarine
	.globl AquaHideout_1F_Text_BossWentToJackASubmarine
AquaHideout_1F_Text_BossWentToJackASubmarine: @ 0x08217A9D
	.string "なんだ なんだ!\nおれたち アクアだんに なんの ようだ!\pリーダーだったら いま せんすいていを\nぶんどりに でかけていて るすだぞ!\p……どこに いったのか だって?\pわはははっ! そんな だいじな ことを\nおしえられる わけ ないだろうが!{EOS}"
	.if (. - AquaHideout_1F_Text_BossWentToJackASubmarine) > 0x7c
	.error "AquaHideout_1F_Text_BossWentToJackASubmarine may not grow beyond its original slot"
	.endif
	.if (. - AquaHideout_1F_Text_BossWentToJackASubmarine) < 0x7c
	.space 0x7c - (. - AquaHideout_1F_Text_BossWentToJackASubmarine)
	.endif
	@ data/maps/AquaHideout_1F/scripts.inc:62 AquaHideout_1F_Text_BossIsOnRoute122
	.globl gText_Rom_217B19
gText_Rom_217B19: @ 0x08217B19
	.string "なんだ なんだ!\nおれたち アクアだんに なんの ようだ!\pリーダーは いま 122ばん すいどうの\nおくりびやまに むかっていて るすだぞ!\p……なにしに いったのか だって?\pわはははっ! そんな だいじな ことを\nおしえられる わけ ないだろうが!{EOS}"
	.if (. - gText_Rom_217B19) > 0x80
	.error "gText_Rom_217B19 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_217B19) < 0x80
	.space 0x80 - (. - gText_Rom_217B19)
	.endif
	@ data/maps/AquaHideout_1F/scripts.inc:65 AquaHideout_1F_Text_TeamMagmaAtMtChimney
	.globl AquaHideout_1F_Text_TeamMagmaAtMtChimney
AquaHideout_1F_Text_TeamMagmaAtMtChimney: @ 0x08217B99
	.string "なんだ なんだ!\nおまえは マグマだんの したっぱか!?\pえんとつやまには マグマだんが ねらう\nすごい ポケモンが いるらしいな!\pえーい! そいつは\nいったい どんな ポケモン なんだ!{EOS}"
	.if (. - AquaHideout_1F_Text_TeamMagmaAtMtChimney) > 0x60
	.error "AquaHideout_1F_Text_TeamMagmaAtMtChimney may not grow beyond its original slot"
	.endif
	.if (. - AquaHideout_1F_Text_TeamMagmaAtMtChimney) < 0x60
	.space 0x60 - (. - AquaHideout_1F_Text_TeamMagmaAtMtChimney)
	.endif
	@ data/maps/AquaHideout_1F/scripts.inc:68 AquaHideout_1F_Text_BossIsInSlateportCity
	.globl gText_Rom_217BF9
gText_Rom_217BF9: @ 0x08217BF9
	.string "なんだ なんだ!\nおれたち アクアだんに なんの ようだ!\pリーダーは いま カイナシティに\nむかっていて るすだぞ!\p……なにしに いったのか だって?\pわはははっ! そんな だいじな ことを\nおしえられる わけ ないだろうが!{EOS}"
	.if (. - gText_Rom_217BF9) > 0x74
	.error "gText_Rom_217BF9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_217BF9) < 0x74
	.space 0x74 - (. - gText_Rom_217BF9)
	.endif
	@ data/maps/AquaHideout_1F/scripts.inc:71 AquaHideout_1F_Text_Grunt1Intro (+1 aliases)
	.globl AquaHideout_1F_Text_Grunt1Intro
AquaHideout_1F_Text_Grunt1Intro: @ 0x08217C6D
	.string "ややや!\nあやしい じんぶつを はっけーん!{EOS}"
	.if (. - AquaHideout_1F_Text_Grunt1Intro) > 0x17
	.error "AquaHideout_1F_Text_Grunt1Intro may not grow beyond its original slot"
	.endif
	.if (. - AquaHideout_1F_Text_Grunt1Intro) < 0x17
	.space 0x17 - (. - AquaHideout_1F_Text_Grunt1Intro)
	.endif
	@ data/maps/AquaHideout_1F/scripts.inc:74 AquaHideout_1F_Text_Grunt1Defeat (+1 aliases)
	.globl AquaHideout_1F_Text_Grunt1Defeat
AquaHideout_1F_Text_Grunt1Defeat: @ 0x08217C84
	.string "うーむ まけちまったかー!{EOS}"
	.if (. - AquaHideout_1F_Text_Grunt1Defeat) > 0xe
	.error "AquaHideout_1F_Text_Grunt1Defeat may not grow beyond its original slot"
	.endif
	.if (. - AquaHideout_1F_Text_Grunt1Defeat) < 0xe
	.space 0xe - (. - AquaHideout_1F_Text_Grunt1Defeat)
	.endif
	@ data/maps/AquaHideout_1F/scripts.inc:77 AquaHideout_1F_Text_Grunt1PostBattle
	.globl AquaHideout_1F_Text_Grunt1PostBattle
AquaHideout_1F_Text_Grunt1PostBattle: @ 0x08217C92
	.string "しょうぶには まけたが\nおれは やくめを はたしたのだ……{EOS}"
	.if (. - AquaHideout_1F_Text_Grunt1PostBattle) > 0x1e
	.error "AquaHideout_1F_Text_Grunt1PostBattle may not grow beyond its original slot"
	.endif
	.if (. - AquaHideout_1F_Text_Grunt1PostBattle) < 0x1e
	.space 0x1e - (. - AquaHideout_1F_Text_Grunt1PostBattle)
	.endif

	@ Embedded ROM bytes: file offset 0x217CB0, size 0x46
	.byte 0x05, 0xBB, 0x7C, 0x21, 0x08, 0x03, 0xD9, 0x7C, 0x21, 0x08, 0x00, 0x2B, 0xC1, 0x08, 0x07, 0x01
	.byte 0xC5, 0x7C, 0x21, 0x08, 0x02, 0x26, 0x0D, 0x80, 0xB4, 0x00, 0x21, 0x0D, 0x80, 0x07, 0x00, 0x06
	.byte 0x05, 0x78, 0x41, 0x24, 0x08, 0x53, 0x0F, 0x80, 0x03, 0x2B, 0xC4, 0x01, 0x07, 0x00, 0xEC, 0x7C
	.byte 0x21, 0x08, 0x2B, 0xC5, 0x01, 0x07, 0x00, 0xF0, 0x7C, 0x21, 0x08, 0x02, 0x2A, 0xD1, 0x03, 0x03
	.byte 0x2A, 0xD2, 0x03, 0x03, 0x6A, 0x5A

	setwildbattle SPECIES_ELECTRODE, 30, ITEM_NONE

	@ Embedded ROM bytes: file offset 0x217CFC, size 0x47
	.byte 0x30, 0xA1, 0x65, 0x00, 0x02, 0x00, 0x28, 0x28, 0x00, 0xC5, 0x29, 0xC1, 0x08, 0xB7, 0x2A, 0xC1
	.byte 0x08, 0x26, 0x0D, 0x80, 0xB4, 0x00, 0x21, 0x0D, 0x80, 0x01, 0x00, 0x06, 0x01, 0x38, 0x7D, 0x21
	.byte 0x08, 0x21, 0x0D, 0x80, 0x04, 0x00, 0x06, 0x01, 0x38, 0x7D, 0x21, 0x08, 0x21, 0x0D, 0x80, 0x05
	.byte 0x00, 0x06, 0x01, 0x38, 0x7D, 0x21, 0x08, 0x29, 0xC4, 0x01, 0x6C, 0x02, 0x29, 0xC4, 0x01, 0x05
	.byte 0x97, 0x41, 0x24, 0x08, 0x02, 0x6A, 0x5A

	setwildbattle SPECIES_ELECTRODE, 30, ITEM_NONE

	@ Embedded ROM bytes: file offset 0x217D49, size 0xC3
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x30, 0xA1, 0x65, 0x00, 0x02, 0x00, 0x28, 0x28, 0x00, 0xC5, 0x29, 0xC1, 0x08, 0xB7, 0x2A, 0xC1
	.byte 0x08, 0x26, 0x0D, 0x80, 0xB4, 0x00, 0x21, 0x0D, 0x80, 0x01, 0x00, 0x06, 0x01, 0x85, 0x7D, 0x21
	.byte 0x08, 0x21, 0x0D, 0x80, 0x04, 0x00, 0x06, 0x01, 0x85, 0x7D, 0x21, 0x08, 0x21, 0x0D, 0x80, 0x05
	.byte 0x00, 0x06, 0x01, 0x85, 0x7D, 0x21, 0x08, 0x29, 0xC5, 0x01, 0x6C, 0x02, 0x29, 0xC5, 0x01, 0x05
	.byte 0x97, 0x41, 0x24, 0x08, 0x02, 0x5C, 0x02, 0x03, 0x00, 0x00, 0x00, 0x0C, 0x7E, 0x21, 0x08, 0x2B
	.byte 0x7E, 0x21, 0x08, 0xA9, 0x7D, 0x21, 0x08, 0x0F, 0x00, 0x39, 0x7E, 0x21, 0x08, 0x09, 0x06, 0x02
	.byte 0x25, 0x04, 0x02, 0x51, 0x00, 0x00, 0x0F, 0x00, 0x39, 0x7E, 0x21, 0x08, 0x09, 0x04, 0x6C, 0x02
	.byte 0x5C, 0x02, 0x04, 0x00, 0x00, 0x00
	.4byte AquaHideout_B1F_Text_Grunt3Intro @ ROM pointer 0x08217E76
	.4byte AquaHideout_B1F_Text_Grunt3Defeat @ ROM pointer 0x08217EAD
	.byte 0xD4, 0x7D, 0x21, 0x08, 0x0F, 0x00, 0xBB, 0x7E, 0x21, 0x08, 0x09, 0x06, 0x02, 0x0F, 0x00, 0xBB
	.byte 0x7E, 0x21, 0x08, 0x09, 0x04, 0x6C, 0x02, 0x5C, 0x00, 0x1B, 0x00, 0x00, 0x00, 0xE8, 0x7E, 0x21
	.byte 0x08, 0x0C, 0x7F, 0x21, 0x08, 0x0F, 0x00, 0x16, 0x7F, 0x21, 0x08, 0x09, 0x06, 0x02, 0x5C, 0x00
	.byte 0xC0, 0x00, 0x00, 0x00
	.4byte AquaHideout_B1F_Text_Grunt7Intro @ ROM pointer 0x08217F3A
	.4byte AquaHideout_B1F_Text_Grunt7Defeat @ ROM pointer 0x08217F6E
	.byte 0x0F, 0x00, 0x7B, 0x7F, 0x21, 0x08, 0x09, 0x06, 0x02
