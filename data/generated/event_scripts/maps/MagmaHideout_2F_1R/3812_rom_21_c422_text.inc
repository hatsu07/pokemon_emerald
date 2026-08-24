	@ data/maps/MagmaHideout_2F_1R/scripts.inc:24 MagmaHideout_2F_1R_Text_Grunt14Intro (+1 aliases)
	.globl gText_Rom_21C2E3
gText_Rom_21C2E3: @ 0x0821C2E3
	.string "むむむ!\pここに はいって これるのは\nマグマだんの メンバー だけのはず!\pなのに あなたは\nマグマだんの ふくを きていない……\pえーい あやしい やつめ!\nわたしと しょうぶ しなさい!"
	.byte EOS
	.if (. - gText_Rom_21C2E3) > 0x61
	.error "gText_Rom_21C2E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C2E3) < 0x61
	.space 0x61 - (. - gText_Rom_21C2E3)
	.endif
	@ data/maps/MagmaHideout_2F_1R/scripts.inc:33 MagmaHideout_2F_1R_Text_Grunt14Defeat (+1 aliases)
	.globl gText_Rom_21C344
gText_Rom_21C344: @ 0x0821C344
	.string "あわわわ……\nマグマだんの プライドが……"
	.byte EOS
	.if (. - gText_Rom_21C344) > 0x16
	.error "gText_Rom_21C344 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C344) < 0x16
	.space 0x16 - (. - gText_Rom_21C344)
	.endif
	@ data/maps/MagmaHideout_2F_1R/scripts.inc:37 MagmaHideout_2F_1R_Text_Grunt14PostBattle
	.globl gText_Rom_21C35A
gText_Rom_21C35A: @ 0x0821C35A
	.string "さむがりの ひとは\nマグマだんに はいると いいわよ"
	.byte EOS
	.if (. - gText_Rom_21C35A) > 0x1b
	.error "gText_Rom_21C35A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C35A) < 0x1b
	.space 0x1b - (. - gText_Rom_21C35A)
	.endif
	@ data/maps/MagmaHideout_2F_1R/scripts.inc:41 MagmaHideout_2F_1R_Text_Grunt3Intro (+1 aliases)
	.globl MagmaHideout_2F_1R_Text_Grunt3Intro
MagmaHideout_2F_1R_Text_Grunt3Intro: @ 0x0821C375
	.string "こらこら!\pオレの めのまえを だまって\nすどおり させる わけには いかねーぞ!"
	.byte EOS
	.if (. - MagmaHideout_2F_1R_Text_Grunt3Intro) > 0x2a
	.error "MagmaHideout_2F_1R_Text_Grunt3Intro may not grow beyond its original slot"
	.endif
	.if (. - MagmaHideout_2F_1R_Text_Grunt3Intro) < 0x2a
	.space 0x2a - (. - MagmaHideout_2F_1R_Text_Grunt3Intro)
	.endif
	@ data/maps/MagmaHideout_2F_1R/scripts.inc:46 MagmaHideout_2F_1R_Text_Grunt3Defeat (+1 aliases)
	.globl MagmaHideout_2F_1R_Text_Grunt3Defeat
MagmaHideout_2F_1R_Text_Grunt3Defeat: @ 0x0821C39F
	.string "うはっ! まけましたっ!"
	.byte EOS
	.if (. - MagmaHideout_2F_1R_Text_Grunt3Defeat) > 0xd
	.error "MagmaHideout_2F_1R_Text_Grunt3Defeat may not grow beyond its original slot"
	.endif
	.if (. - MagmaHideout_2F_1R_Text_Grunt3Defeat) < 0xd
	.space 0xd - (. - MagmaHideout_2F_1R_Text_Grunt3Defeat)
	.endif
	@ data/maps/MagmaHideout_2F_1R/scripts.inc:50 MagmaHideout_2F_1R_Text_Grunt3PostBattle
	.globl gText_Rom_21C3AC
gText_Rom_21C3AC: @ 0x0821C3AC
	.string "こんなことなら すどおり していって\nもらうほうが よかったかも……"
	.byte EOS
	.if (. - gText_Rom_21C3AC) > 0x23
	.error "gText_Rom_21C3AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C3AC) < 0x23
	.space 0x23 - (. - gText_Rom_21C3AC)
	.endif
	@ data/maps/MagmaHideout_2F_1R/scripts.inc:54 MagmaHideout_2F_1R_Text_Grunt4Intro (+1 aliases)
	.globl gText_Rom_21C3CF
gText_Rom_21C3CF: @ 0x0821C3CF
	.string "やや! あやしい やつめ!"
	.byte EOS
	.if (. - gText_Rom_21C3CF) > 0xe
	.error "gText_Rom_21C3CF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C3CF) < 0xe
	.space 0xe - (. - gText_Rom_21C3CF)
	.endif
	@ data/maps/MagmaHideout_2F_1R/scripts.inc:58 MagmaHideout_2F_1R_Text_Grunt4Defeat (+1 aliases)
	.globl gText_Rom_21C3DD
gText_Rom_21C3DD: @ 0x0821C3DD
	.string "ぬおお……"
	.byte EOS
	.if (. - gText_Rom_21C3DD) > 0x6
	.error "gText_Rom_21C3DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C3DD) < 0x6
	.space 0x6 - (. - gText_Rom_21C3DD)
	.endif
	@ data/maps/MagmaHideout_2F_1R/scripts.inc:61 MagmaHideout_2F_1R_Text_Grunt4PostBattle
	.globl gText_Rom_21C3E3
gText_Rom_21C3E3: @ 0x0821C3E3
	.string "しょうぶに まけたのに\nまだ ここを ぐるぐる まわる\lひつようが あるんだろうか?"
	.byte EOS
	.if (. - gText_Rom_21C3E3) > 0x2b
	.error "gText_Rom_21C3E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C3E3) < 0x2b
	.space 0x2b - (. - gText_Rom_21C3E3)
	.endif
	@ data/maps/MagmaHideout_2F_1R/scripts.inc:66 MagmaHideout_2F_1R_Text_Grunt5Intro (+1 aliases)
	.globl gText_Rom_21C40E
gText_Rom_21C40E: @ 0x0821C40E
	.string "むむ! あやしい やつめ!"
	.byte EOS
	.if (. - gText_Rom_21C40E) > 0xe
	.error "gText_Rom_21C40E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C40E) < 0xe
	.space 0xe - (. - gText_Rom_21C40E)
	.endif
	@ data/maps/MagmaHideout_2F_1R/scripts.inc:70 MagmaHideout_2F_1R_Text_Grunt5Defeat (+1 aliases)
	.globl gText_Rom_21C41C
gText_Rom_21C41C: @ 0x0821C41C
	.string "うぬぬ……"
	.byte EOS
	.if (. - gText_Rom_21C41C) > 0x6
	.error "gText_Rom_21C41C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C41C) < 0x6
	.space 0x6 - (. - gText_Rom_21C41C)
	.endif
	@ data/maps/MagmaHideout_2F_1R/scripts.inc:73 MagmaHideout_2F_1R_Text_Grunt5PostBattle
	.globl MagmaHideout_2F_1R_Text_Grunt5PostBattle
MagmaHideout_2F_1R_Text_Grunt5PostBattle: @ 0x0821C422
	.string "オレ ほんとは ポケモンしょうぶ\nあんまり とくいじゃ ないんだよね"
	.byte EOS
	.if (. - MagmaHideout_2F_1R_Text_Grunt5PostBattle) > 0x23
	.error "MagmaHideout_2F_1R_Text_Grunt5PostBattle may not grow beyond its original slot"
	.endif
	.if (. - MagmaHideout_2F_1R_Text_Grunt5PostBattle) < 0x23
	.space 0x23 - (. - MagmaHideout_2F_1R_Text_Grunt5PostBattle)
	.endif
	@ Embedded ROM bytes: file offset 0x21C445, size 0x5D
	.byte 0x00, 0x5C, 0x00, 0xDA, 0x02, 0x00, 0x00, 0xA2, 0xC4, 0x21, 0x08, 0xC0, 0xC4, 0x21, 0x08, 0x0F
	.byte 0x00, 0xCD, 0xC4, 0x21, 0x08, 0x09, 0x06, 0x02, 0x5C, 0x00, 0xD1, 0x02, 0x00, 0x00, 0x07, 0xC5
	.byte 0x21, 0x08, 0x34, 0xC5, 0x21, 0x08, 0x0F, 0x00, 0x4E, 0xC5, 0x21, 0x08, 0x09, 0x06, 0x02, 0x5C
	.byte 0x00, 0xD2, 0x02, 0x00, 0x00, 0x6E, 0xC5, 0x21, 0x08, 0xAD, 0xC5, 0x21, 0x08, 0x0F, 0x00, 0xC3
	.byte 0xC5, 0x21, 0x08, 0x09, 0x06, 0x02, 0x5C, 0x00, 0xD3, 0x02, 0x00, 0x00, 0xF4, 0xC5, 0x21, 0x08
	.byte 0x35, 0xC6, 0x21, 0x08, 0x0F, 0x00, 0x43, 0xC6, 0x21, 0x08, 0x09, 0x06, 0x02
