	@ data/maps/MagmaHideout_3F_1R/scripts.inc:14 MagmaHideout_3F_1R_Text_Grunt9Intro (+1 aliases)
	.globl gText_Rom_21C697
gText_Rom_21C697: @ 0x0821C697
	.string "なんで オレは こんなところの\nたんとう なんだよ!\pひだりのみみ が あつい じゃねーか!"
	.byte EOS
	.if (. - gText_Rom_21C697) > 0x2f
	.error "gText_Rom_21C697 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C697) < 0x2f
	.space 0x2f - (. - gText_Rom_21C697)
	.endif
	@ data/maps/MagmaHideout_3F_1R/scripts.inc:19 MagmaHideout_3F_1R_Text_Grunt9Defeat (+1 aliases)
	.globl gText_Rom_21C6C6
gText_Rom_21C6C6: @ 0x0821C6C6
	.string "あつくて ヘロヘロ……"
	.byte EOS
	.if (. - gText_Rom_21C6C6) > 0xc
	.error "gText_Rom_21C6C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C6C6) < 0xc
	.space 0xc - (. - gText_Rom_21C6C6)
	.endif
	@ data/maps/MagmaHideout_3F_1R/scripts.inc:22 MagmaHideout_3F_1R_Text_Grunt9PostBattle
	.globl gText_Rom_21C6D2
gText_Rom_21C6D2: @ 0x0821C6D2
	.string "こんな マグマだらけの かざんの なかで\nフードを かぶってる オレたち へん?"
	.byte EOS
	.if (. - gText_Rom_21C6D2) > 0x29
	.error "gText_Rom_21C6D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C6D2) < 0x29
	.space 0x29 - (. - gText_Rom_21C6D2)
	.endif
	@ data/maps/MagmaHideout_3F_1R/scripts.inc:26 MagmaHideout_3F_1R_Text_Grunt16Intro (+1 aliases)
	.globl gText_Rom_21C6FB
gText_Rom_21C6FB: @ 0x0821C6FB
	.string "アタシたちは リーダーが めざしている\nすばらしい もくてきを\lじつげん するために あつまったの!\pアクアだん だろうが\nとおりすがりの おこさま だろうが\lじゃまを するなら ゆるさないわ!"
	.byte EOS
	.if (. - gText_Rom_21C6FB) > 0x62
	.error "gText_Rom_21C6FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C6FB) < 0x62
	.space 0x62 - (. - gText_Rom_21C6FB)
	.endif
	@ data/maps/MagmaHideout_3F_1R/scripts.inc:34 MagmaHideout_3F_1R_Text_Grunt16Defeat (+1 aliases)
	.globl gText_Rom_21C75D
gText_Rom_21C75D: @ 0x0821C75D
	.string "ひえー あなどれない ひと!"
	.byte EOS
	.if (. - gText_Rom_21C75D) > 0xf
	.error "gText_Rom_21C75D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C75D) < 0xf
	.space 0xf - (. - gText_Rom_21C75D)
	.endif
	@ data/maps/MagmaHideout_3F_1R/scripts.inc:38 MagmaHideout_3F_1R_Text_Grunt16PostBattle
	.globl MagmaHideout_3F_1R_Text_Grunt16PostBattle
MagmaHideout_3F_1R_Text_Grunt16PostBattle: @ 0x0821C76C
	.string "いい? ただしいのは マグマだんよ!\nアクアだんの いうことなんか\lうそ ばっかりだから しんじちゃ ダメよ!"
	.byte EOS
	.if (. - MagmaHideout_3F_1R_Text_Grunt16PostBattle) > 0x38
	.error "MagmaHideout_3F_1R_Text_Grunt16PostBattle may not grow beyond its original slot"
	.endif
	.if (. - MagmaHideout_3F_1R_Text_Grunt16PostBattle) < 0x38
	.space 0x38 - (. - MagmaHideout_3F_1R_Text_Grunt16PostBattle)
	.endif
	@ Embedded ROM bytes: file offset 0x21C7A4, size 0x18
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x00, 0x5C, 0x00, 0xD5, 0x02, 0x00, 0x00
	.4byte MagmaHideout_3F_2R_Text_Grunt10Intro @ ROM pointer 0x0821C7BC
	.4byte MagmaHideout_3F_2R_Text_Grunt10Defeat @ ROM pointer 0x0821C831
	.byte 0x0F, 0x00, 0x46, 0xC8, 0x21, 0x08, 0x09, 0x06, 0x02
