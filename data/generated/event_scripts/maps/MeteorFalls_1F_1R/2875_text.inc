	@ data/maps/MeteorFalls_1F_1R/scripts.inc:291 MeteorFalls_1F_1R_Text_MeetProfCozmo
	.globl gText_Rom_212F92
gText_Rom_212F92: @ 0x08212F92
	.string "ぼく ソライシ……\pマグマだんに たのまれて\nここまで あんない してきたんだけど\lだまされて\lいんせき とられちゃったよ……\pおまけに アクアだん っていう\nにたような れんちゅうまで あらわれて\lもう なにが なんだか……\pそれにしても マグマだんは\nいんせき なんか もっていって\lえんとつやまで\lなにする つもり なんだろう……?$"
	.if (. - gText_Rom_212F92) > 0xaa
	.error "gText_Rom_212F92 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_212F92) < 0xaa
	.space 0xaa - (. - gText_Rom_212F92)
	.endif
