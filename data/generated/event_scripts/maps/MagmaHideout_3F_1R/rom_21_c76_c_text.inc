	@ data/maps/MagmaHideout_3F_1R/scripts.inc:14 MagmaHideout_3F_1R_Text_Grunt9Intro (+1 aliases)
	.globl MagmaHideout_3F_1R_Text_Grunt9Intro
MagmaHideout_3F_1R_Text_Grunt9Intro: @ 0x0821C697
	.string "なんで オレは こんなところの\nたんとう なんだよ!\pひだりのみみ が あつい じゃねーか!"
	.byte EOS
	.if (. - MagmaHideout_3F_1R_Text_Grunt9Intro) > 0x2f
	.error "MagmaHideout_3F_1R_Text_Grunt9Intro may not grow beyond its original slot"
	.endif
	.if (. - MagmaHideout_3F_1R_Text_Grunt9Intro) < 0x2f
	.space 0x2f - (. - MagmaHideout_3F_1R_Text_Grunt9Intro)
	.endif
	@ data/maps/MagmaHideout_3F_1R/scripts.inc:19 MagmaHideout_3F_1R_Text_Grunt9Defeat (+1 aliases)
	.globl MagmaHideout_3F_1R_Text_Grunt9Defeat
MagmaHideout_3F_1R_Text_Grunt9Defeat: @ 0x0821C6C6
	.string "あつくて ヘロヘロ……"
	.byte EOS
	.if (. - MagmaHideout_3F_1R_Text_Grunt9Defeat) > 0xc
	.error "MagmaHideout_3F_1R_Text_Grunt9Defeat may not grow beyond its original slot"
	.endif
	.if (. - MagmaHideout_3F_1R_Text_Grunt9Defeat) < 0xc
	.space 0xc - (. - MagmaHideout_3F_1R_Text_Grunt9Defeat)
	.endif
	@ data/maps/MagmaHideout_3F_1R/scripts.inc:22 MagmaHideout_3F_1R_Text_Grunt9PostBattle
	.globl MagmaHideout_3F_1R_Text_Grunt9PostBattle
MagmaHideout_3F_1R_Text_Grunt9PostBattle: @ 0x0821C6D2
	.string "こんな マグマだらけの かざんの なかで\nフードを かぶってる オレたち へん?"
	.byte EOS
	.if (. - MagmaHideout_3F_1R_Text_Grunt9PostBattle) > 0x29
	.error "MagmaHideout_3F_1R_Text_Grunt9PostBattle may not grow beyond its original slot"
	.endif
	.if (. - MagmaHideout_3F_1R_Text_Grunt9PostBattle) < 0x29
	.space 0x29 - (. - MagmaHideout_3F_1R_Text_Grunt9PostBattle)
	.endif
	@ data/maps/MagmaHideout_3F_1R/scripts.inc:26 MagmaHideout_3F_1R_Text_Grunt16Intro (+1 aliases)
	.globl MagmaHideout_3F_1R_Text_Grunt16Intro
MagmaHideout_3F_1R_Text_Grunt16Intro: @ 0x0821C6FB
	.string "アタシたちは リーダーが めざしている\nすばらしい もくてきを\lじつげん するために あつまったの!\pアクアだん だろうが\nとおりすがりの おこさま だろうが\lじゃまを するなら ゆるさないわ!"
	.byte EOS
	.if (. - MagmaHideout_3F_1R_Text_Grunt16Intro) > 0x62
	.error "MagmaHideout_3F_1R_Text_Grunt16Intro may not grow beyond its original slot"
	.endif
	.if (. - MagmaHideout_3F_1R_Text_Grunt16Intro) < 0x62
	.space 0x62 - (. - MagmaHideout_3F_1R_Text_Grunt16Intro)
	.endif
	@ data/maps/MagmaHideout_3F_1R/scripts.inc:34 MagmaHideout_3F_1R_Text_Grunt16Defeat (+1 aliases)
	.globl MagmaHideout_3F_1R_Text_Grunt16Defeat
MagmaHideout_3F_1R_Text_Grunt16Defeat: @ 0x0821C75D
	.string "ひえー あなどれない ひと!"
	.byte EOS
	.if (. - MagmaHideout_3F_1R_Text_Grunt16Defeat) > 0xf
	.error "MagmaHideout_3F_1R_Text_Grunt16Defeat may not grow beyond its original slot"
	.endif
	.if (. - MagmaHideout_3F_1R_Text_Grunt16Defeat) < 0xf
	.space 0xf - (. - MagmaHideout_3F_1R_Text_Grunt16Defeat)
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
