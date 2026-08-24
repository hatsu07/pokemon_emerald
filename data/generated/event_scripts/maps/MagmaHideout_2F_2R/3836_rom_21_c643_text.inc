	@ data/maps/MagmaHideout_2F_2R/scripts.inc:24 MagmaHideout_2F_2R_Text_Grunt15Intro (+1 aliases)
	.globl MagmaHideout_2F_2R_Text_Grunt15Intro
MagmaHideout_2F_2R_Text_Grunt15Intro: @ 0x0821C4A2
	.string "あなたに うらみは ないけど\nこれも めいれい だからね!"
	.byte EOS
	.if (. - MagmaHideout_2F_2R_Text_Grunt15Intro) > 0x1e
	.error "MagmaHideout_2F_2R_Text_Grunt15Intro may not grow beyond its original slot"
	.endif
	.if (. - MagmaHideout_2F_2R_Text_Grunt15Intro) < 0x1e
	.space 0x1e - (. - MagmaHideout_2F_2R_Text_Grunt15Intro)
	.endif
	@ data/maps/MagmaHideout_2F_2R/scripts.inc:28 MagmaHideout_2F_2R_Text_Grunt15Defeat (+1 aliases)
	.globl MagmaHideout_2F_2R_Text_Grunt15Defeat
MagmaHideout_2F_2R_Text_Grunt15Defeat: @ 0x0821C4C0
	.string "わたしは まけたけど……"
	.byte EOS
	.if (. - MagmaHideout_2F_2R_Text_Grunt15Defeat) > 0xd
	.error "MagmaHideout_2F_2R_Text_Grunt15Defeat may not grow beyond its original slot"
	.endif
	.if (. - MagmaHideout_2F_2R_Text_Grunt15Defeat) < 0xd
	.space 0xd - (. - MagmaHideout_2F_2R_Text_Grunt15Defeat)
	.endif
	@ data/maps/MagmaHideout_2F_2R/scripts.inc:31 MagmaHideout_2F_2R_Text_Grunt15PostBattle
	.globl gText_Rom_21C4CD
gText_Rom_21C4CD: @ 0x0821C4CD
	.string "とんでもないものを ほりだした!\nあいいろのたまも てにいれた!\pあとは リーダーが……\nふふふ…… ふはははは!"
	.byte EOS
	.if (. - gText_Rom_21C4CD) > 0x3a
	.error "gText_Rom_21C4CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C4CD) < 0x3a
	.space 0x3a - (. - gText_Rom_21C4CD)
	.endif
	@ data/maps/MagmaHideout_2F_2R/scripts.inc:37 MagmaHideout_2F_2R_Text_Grunt6Intro (+1 aliases)
	.globl gText_Rom_21C507
gText_Rom_21C507: @ 0x0821C507
	.string "オレって あつがり なんだよ\nもしかして アクアだんに はいったほうが\lよかったのかな?"
	.byte EOS
	.if (. - gText_Rom_21C507) > 0x2d
	.error "gText_Rom_21C507 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C507) < 0x2d
	.space 0x2d - (. - gText_Rom_21C507)
	.endif
	@ data/maps/MagmaHideout_2F_2R/scripts.inc:41 MagmaHideout_2F_2R_Text_Grunt6Defeat (+1 aliases)
	.globl gText_Rom_21C534
gText_Rom_21C534: @ 0x0821C534
	.string "やっぱり オレ\nマグマだんには むいてないかも……"
	.byte EOS
	.if (. - gText_Rom_21C534) > 0x1a
	.error "gText_Rom_21C534 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C534) < 0x1a
	.space 0x1a - (. - gText_Rom_21C534)
	.endif
	@ data/maps/MagmaHideout_2F_2R/scripts.inc:45 MagmaHideout_2F_2R_Text_Grunt6PostBattle
	.globl gText_Rom_21C54E
gText_Rom_21C54E: @ 0x0821C54E
	.string "こんなところに いると\nうみが こいしく なったり しないか?"
	.byte EOS
	.if (. - gText_Rom_21C54E) > 0x20
	.error "gText_Rom_21C54E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C54E) < 0x20
	.space 0x20 - (. - gText_Rom_21C54E)
	.endif
	@ data/maps/MagmaHideout_2F_2R/scripts.inc:49 MagmaHideout_2F_2R_Text_Grunt7Intro (+1 aliases)
	.globl gText_Rom_21C56E
gText_Rom_21C56E: @ 0x0821C56E
	.string "ときどき じひびきが きこえるんだよ\pそれって かざんの しんどう かな?\nそれとも グラ……\pおっとっと なんでもないよ!"
	.byte EOS
	.if (. - gText_Rom_21C56E) > 0x3f
	.error "gText_Rom_21C56E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C56E) < 0x3f
	.space 0x3f - (. - gText_Rom_21C56E)
	.endif
	@ data/maps/MagmaHideout_2F_2R/scripts.inc:56 MagmaHideout_2F_2R_Text_Grunt7Defeat (+1 aliases)
	.globl gText_Rom_21C5AD
gText_Rom_21C5AD: @ 0x0821C5AD
	.string "うーむ\nかざんのように あついな きみは!"
	.byte EOS
	.if (. - gText_Rom_21C5AD) > 0x16
	.error "gText_Rom_21C5AD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C5AD) < 0x16
	.space 0x16 - (. - gText_Rom_21C5AD)
	.endif
	@ data/maps/MagmaHideout_2F_2R/scripts.inc:60 MagmaHideout_2F_2R_Text_Grunt7PostBattle
	.globl MagmaHideout_2F_2R_Text_Grunt7PostBattle
MagmaHideout_2F_2R_Text_Grunt7PostBattle: @ 0x0821C5C3
	.string "オレは たまたま おまえに まけたが\nマグマだんの もくてきは\lまもなく たっせい されるのさ!"
	.byte EOS
	.if (. - MagmaHideout_2F_2R_Text_Grunt7PostBattle) > 0x31
	.error "MagmaHideout_2F_2R_Text_Grunt7PostBattle may not grow beyond its original slot"
	.endif
	.if (. - MagmaHideout_2F_2R_Text_Grunt7PostBattle) < 0x31
	.space 0x31 - (. - MagmaHideout_2F_2R_Text_Grunt7PostBattle)
	.endif
	@ data/maps/MagmaHideout_2F_2R/scripts.inc:66 MagmaHideout_2F_2R_Text_Grunt8Intro (+1 aliases)
	.globl gText_Rom_21C5F4
gText_Rom_21C5F4: @ 0x0821C5F4
	.string "マグマのしるしを どこかに おとした\nって おおさわぎ してるやつが いたけど\p……あ! もしかして\nそれ ひろったの おまえ?"
	.byte EOS
	.if (. - gText_Rom_21C5F4) > 0x41
	.error "gText_Rom_21C5F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C5F4) < 0x41
	.space 0x41 - (. - gText_Rom_21C5F4)
	.endif
	@ data/maps/MagmaHideout_2F_2R/scripts.inc:72 MagmaHideout_2F_2R_Text_Grunt8Defeat (+1 aliases)
	.globl gText_Rom_21C635
gText_Rom_21C635: @ 0x0821C635
	.string "うーん なんて やつだ……"
	.byte EOS
	.if (. - gText_Rom_21C635) > 0xe
	.error "gText_Rom_21C635 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C635) < 0xe
	.space 0xe - (. - gText_Rom_21C635)
	.endif
	@ data/maps/MagmaHideout_2F_2R/scripts.inc:75 MagmaHideout_2F_2R_Text_Grunt8PostBattle
	.globl MagmaHideout_2F_2R_Text_Grunt8PostBattle
MagmaHideout_2F_2R_Text_Grunt8PostBattle: @ 0x0821C643
	.string "なんか…… オレたちの けいかく\nしっぱい するような きが してきたよ"
	.byte EOS
	.if (. - MagmaHideout_2F_2R_Text_Grunt8PostBattle) > 0x25
	.error "MagmaHideout_2F_2R_Text_Grunt8PostBattle may not grow beyond its original slot"
	.endif
	.if (. - MagmaHideout_2F_2R_Text_Grunt8PostBattle) < 0x25
	.space 0x25 - (. - MagmaHideout_2F_2R_Text_Grunt8PostBattle)
	.endif
	@ Embedded ROM bytes: file offset 0x21C668, size 0x2F
	.byte 0x00, 0x5C, 0x00, 0xD4, 0x02, 0x00, 0x00, 0x97, 0xC6, 0x21, 0x08, 0xC6, 0xC6, 0x21, 0x08, 0x0F
	.byte 0x00, 0xD2, 0xC6, 0x21, 0x08, 0x09, 0x06, 0x02, 0x5C, 0x00, 0xDB, 0x02, 0x00, 0x00, 0xFB, 0xC6
	.byte 0x21, 0x08, 0x5D, 0xC7, 0x21, 0x08, 0x0F, 0x00, 0x6C, 0xC7, 0x21, 0x08, 0x09, 0x06, 0x02
