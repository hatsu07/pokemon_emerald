	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:989 LilycoveCity_ContestLobby_Text_TakeMementoOfPainting
	.globl gText_Rom_20757C
gText_Rom_20757C: @ 0x0820757C
	.string "……あ そうだ\pポケモンを かかせて もらった きねんに\nこれを うけとってよ!{EOS}"
	.if (. - gText_Rom_20757C) > 0x29
	.error "gText_Rom_20757C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20757C) < 0x29
	.space 0x29 - (. - gText_Rom_20757C)
	.endif
