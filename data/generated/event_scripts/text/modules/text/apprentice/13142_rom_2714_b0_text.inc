	@ data/text/apprentice.inc:631 gText_ApprenticeWhichMon9
	.globl gText_Rom_2714B0
gText_Rom_2714B0: @ 0x082714B0
	.string "ヘイ ヘイ {PLAYER}{KUN}!\nおじさんの ポケモン ティーチャー!\pハロウ きみを さがしてたんだよ\nアドバイスを おねがいするよ!\pおじさんが つかう ポケモン\nどっちが いいかな?\l{STR_VAR_1}か {STR_VAR_2}か\lパーっと きめちゃって くれ!$"
	.if (. - gText_Rom_2714B0) > 0x72
	.error "gText_Rom_2714B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2714B0) < 0x72
	.space 0x72 - (. - gText_Rom_2714B0)
	.endif
