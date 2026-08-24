	@ data/maps/MeteorFalls_1F_1R/scripts.inc:234 MeteorFalls_1F_1R_Text_WithThisMeteorite
	.globl gText_Rom_212D71
gText_Rom_212D71: @ 0x08212D71
	.string "ウヒョヒョ……!\pこの いんせきが あれば\nえんとつやまの アイツが……{EOS}"
	.if (. - gText_Rom_212D71) > 0x25
	.error "gText_Rom_212D71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_212D71) < 0x25
	.space 0x25 - (. - gText_Rom_212D71)
	.endif
	@ data/maps/MeteorFalls_1F_1R/scripts.inc:239 MeteorFalls_1F_1R_Text_DontExpectMercyFromMagma
	.globl gText_Rom_212D96
gText_Rom_212D96: @ 0x08212D96
	.string "ウヒョ?\pだれだか しらないが\nマグマだんの ジャマを するきなら\lようしゃ しないぜ!{EOS}"
	.if (. - gText_Rom_212D96) > 0x2d
	.error "gText_Rom_212D96 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_212D96) < 0x2d
	.space 0x2d - (. - gText_Rom_212D96)
	.endif
	@ data/maps/MeteorFalls_1F_1R/scripts.inc:245 MeteorFalls_1F_1R_Text_HoldItRightThereMagma
	.globl gText_Rom_212DC3
gText_Rom_212DC3: @ 0x08212DC3
	.string "まてっ! マグマだん!\pせかいを おまえらの おもいどおりに\nできるなんて おおまちがいだ!{EOS}"
	.if (. - gText_Rom_212DC3) > 0x2f
	.error "gText_Rom_212DC3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_212DC3) < 0x2f
	.space 0x2f - (. - gText_Rom_212DC3)
	.endif
	@ data/maps/MeteorFalls_1F_1R/scripts.inc:250 MeteorFalls_1F_1R_Text_BeSeeingYouTeamAqua
	.globl gText_Rom_212DF2
gText_Rom_212DF2: @ 0x08212DF2
	.string "ウヒョヒョ……!\nアクアだん まで やってきたのかよ!\pいちいち あいてを してやるのも\nめんどうだな……\pまあ いいや!\nいんせきは てに いれたし\lさっさと えんとつやまに いくか!\pウヒョヒョ!\nあばよ! まぬけな アクアだん!{EOS}"
	.if (. - gText_Rom_212DF2) > 0x76
	.error "gText_Rom_212DF2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_212DF2) < 0x76
	.space 0x76 - (. - gText_Rom_212DF2)
	.endif
	@ data/maps/MeteorFalls_1F_1R/scripts.inc:261 MeteorFalls_1F_1R_Text_ArchieSeenYouBefore
	.globl gText_Rom_212E68
gText_Rom_212E68: @ 0x08212E68
	.string "アオギリ『おまえとは たしか……\nカイナの はくぶつかんでも あったが\pそうか {PLAYER}と いうのか\pあのときは マグマだんの したっぱだと\nおもったんだが\lふん……\lおかしな やつだな……\pマグマだん というのは\nりくちをふやす などと いっては\lはかいかつどうを くりかえす\lきけんな しゅうだんだ!\pうみを あいする われわれ アクアだんの\nしゅくてき なのだよ!{EOS}"
	.if (. - gText_Rom_212E68) > 0xb8
	.error "gText_Rom_212E68 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_212E68) < 0xb8
	.space 0xb8 - (. - gText_Rom_212E68)
	.endif
	@ data/maps/MeteorFalls_1F_1R/scripts.inc:276 MeteorFalls_1F_1R_Text_BossWeShouldChaseMagma
	.globl gText_Rom_212F20
gText_Rom_212F20: @ 0x08212F20
	.string "アオギリさま\nマグマだんを おいかけないと……{EOS}"
	.if (. - gText_Rom_212F20) > 0x18
	.error "gText_Rom_212F20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_212F20) < 0x18
	.space 0x18 - (. - gText_Rom_212F20)
	.endif
	@ data/maps/MeteorFalls_1F_1R/scripts.inc:280 MeteorFalls_1F_1R_Text_ArchieYesNoTellingWhatMagmaWillDo
	.globl gText_Rom_212F38
gText_Rom_212F38: @ 0x08212F38
	.string "アオギリ『そうだな!\pマグマだんの やつら えんとつやまで\nなにを しでかすか わからない!{EOS}"
	.if (. - gText_Rom_212F38) > 0x2f
	.error "gText_Rom_212F38 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_212F38) < 0x2f
	.space 0x2f - (. - gText_Rom_212F38)
	.endif
	@ data/maps/MeteorFalls_1F_1R/scripts.inc:286 MeteorFalls_1F_1R_Text_ArchieFarewell
	.globl gText_Rom_212F67
gText_Rom_212F67: @ 0x08212F67
	.string "アオギリ『{PLAYER}…… おまえも\nマグマだんには ようじん するんだな\pでは さらばだ!{EOS}"
	.if (. - gText_Rom_212F67) > 0x2b
	.error "gText_Rom_212F67 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_212F67) < 0x2b
	.space 0x2b - (. - gText_Rom_212F67)
	.endif
	@ data/maps/MeteorFalls_1F_1R/scripts.inc:291 MeteorFalls_1F_1R_Text_MeetProfCozmo
	.globl gText_Rom_212F92
gText_Rom_212F92: @ 0x08212F92
	.string "ぼく ソライシ……\pマグマだんに たのまれて\nここまで あんない してきたんだけど\lだまされて\lいんせき とられちゃったよ……\pおまけに アクアだん っていう\nにたような れんちゅうまで あらわれて\lもう なにが なんだか……\pそれにしても マグマだんは\nいんせき なんか もっていって\lえんとつやまで\lなにする つもり なんだろう……?{EOS}"
	.if (. - gText_Rom_212F92) > 0xaa
	.error "gText_Rom_212F92 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_212F92) < 0xaa
	.space 0xaa - (. - gText_Rom_212F92)
	.endif
	@ data/maps/MeteorFalls_1F_1R/scripts.inc:306 MeteorFalls_1F_1R_Text_WhatsTeamMagmaDoingAtMtChimney
	.globl gText_Rom_21303C
gText_Rom_21303C: @ 0x0821303C
	.string "ソライシ『それにしても マグマだんは\nいんせき なんか もっていって\lえんとつやまで\lなにする つもり なんだろう……?{EOS}"
	.if (. - gText_Rom_21303C) > 0x3d
	.error "gText_Rom_21303C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21303C) < 0x3d
	.space 0x3d - (. - gText_Rom_21303C)
	.endif
	@ Embedded ROM bytes: file offset 0x213079, size 0x12B
	@ semanticized-mass: resolved embedded ROM pointers
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x00, 0x5C, 0x02, 0x88, 0x01, 0x00, 0x00
	.4byte gText_Rom_2131A4 @ ROM pointer 0x082131A4
	.4byte gText_Rom_2131E8 @ ROM pointer 0x082131E8
	.byte 0xA6, 0x30, 0x21, 0x08, 0x26, 0x0D, 0x80, 0x39, 0x00, 0x21, 0x0D, 0x80, 0x01, 0x00, 0x06, 0x01
	.byte 0xC5, 0x30, 0x21, 0x08, 0x0F, 0x00
	.4byte gText_Rom_2131FA @ ROM pointer 0x082131FA
	.byte 0x09, 0x04, 0x6C, 0x02, 0x25, 0x04, 0x02, 0x51, 0x00, 0x00, 0x0F, 0x00
	.4byte gText_Rom_21322E @ ROM pointer 0x0821322E
	.byte 0x09, 0x04, 0x16, 0x04, 0x80, 0x88, 0x01, 0x25, 0xE6, 0x01, 0x1A, 0x00, 0x80, 0x88, 0x01, 0x09
	.byte 0x08, 0x6C, 0x02, 0x5C, 0x05, 0x88, 0x01, 0x00, 0x00, 0x52, 0x32, 0x21, 0x08, 0x93, 0x32, 0x21
	.byte 0x08, 0x0F, 0x00, 0xA5, 0x32, 0x21, 0x08, 0x09, 0x06, 0x02, 0x5C, 0x06, 0xA9, 0x02, 0x00, 0x00
	.4byte gText_Rom_2132D8 @ ROM pointer 0x082132D8
	.4byte gText_Rom_21330B @ ROM pointer 0x0821330B
	.4byte gText_Rom_213350 @ ROM pointer 0x08213350
	.byte 0x0C, 0x31, 0x21, 0x08, 0x26, 0x0D, 0x80, 0x39, 0x00, 0x21, 0x0D, 0x80, 0x01, 0x00, 0x06, 0x01
	.byte 0x25, 0x31, 0x21, 0x08, 0x0F, 0x00, 0x1D, 0x33, 0x21, 0x08, 0x09, 0x04, 0x6C, 0x02, 0x0F, 0x00
	.4byte gText_Rom_21338C @ ROM pointer 0x0821338C
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x09, 0x04, 0x16, 0x04, 0x80, 0xA9, 0x02, 0x25, 0xE6, 0x01, 0x1A, 0x00, 0x80, 0xA9, 0x02, 0x09
	.byte 0x08, 0x6C, 0x02, 0x5C, 0x07, 0xA9, 0x02, 0x00, 0x00
	.4byte gText_Rom_21346D @ ROM pointer 0x0821346D
	.4byte gText_Rom_2134A4 @ ROM pointer 0x082134A4
	.4byte gText_Rom_2134E8 @ ROM pointer 0x082134E8
	.byte 0x0F, 0x00, 0xB6, 0x34, 0x21, 0x08, 0x09, 0x06, 0x02, 0x5C, 0x06, 0xA9, 0x02, 0x00, 0x00
	.4byte gText_Rom_2133BB @ ROM pointer 0x082133BB
	.4byte gText_Rom_2133EB @ ROM pointer 0x082133EB
	.4byte gText_Rom_213430 @ ROM pointer 0x08213430
	.byte 0x70, 0x31, 0x21, 0x08, 0x26, 0x0D, 0x80, 0x39, 0x00, 0x21, 0x0D, 0x80, 0x01, 0x00, 0x06, 0x01
	.byte 0x89, 0x31, 0x21, 0x08, 0x0F, 0x00, 0xFF, 0x33, 0x21, 0x08, 0x09, 0x04, 0x6C, 0x02, 0x0F, 0x00
	.4byte gText_Rom_21338C @ ROM pointer 0x0821338C
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x09, 0x04, 0x16, 0x04, 0x80, 0xA9, 0x02, 0x25, 0xE6, 0x01, 0x1A, 0x00, 0x80, 0xA9, 0x02, 0x09
	.byte 0x08, 0x6C, 0x02, 0x5C, 0x07, 0xA9, 0x02, 0x00, 0x00
	.4byte gText_Rom_213524 @ ROM pointer 0x08213524
	.4byte gText_Rom_213555 @ ROM pointer 0x08213555
	.4byte gText_Rom_2135B1 @ ROM pointer 0x082135B1
	.byte 0x0F, 0x00, 0x69, 0x35, 0x21, 0x08, 0x09, 0x06, 0x02
