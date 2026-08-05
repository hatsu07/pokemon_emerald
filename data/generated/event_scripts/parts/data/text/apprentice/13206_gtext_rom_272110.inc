	@ data/text/apprentice.inc:727 gText_ApprenticeWhichMove9
	.globl gText_Rom_272110
gText_Rom_272110: @ 0x08272110
	.string "ハロウ {PLAYER}{KUN} ハロウ!\nおじさん きょうも きみに\lアドバイスを もらいたいんだ プリーズ!\pマイ ポケモン {STR_VAR_1}の\nベストな わざは なんだろう?\lババーっと かてちゃいそうな わざ!\p{STR_VAR_2} かな?\nオア {STR_VAR_3} かな?$"
	.if (. - gText_Rom_272110) > 0x71
	.error "gText_Rom_272110 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272110) < 0x71
	.space 0x71 - (. - gText_Rom_272110)
	.endif
