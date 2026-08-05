	@ data/text/apprentice.inc:376 gText_ApprenticeWhatHeldItem9
	.globl gText_Rom_26F687
gText_Rom_26F687: @ 0x0826F687
	.string "ハロウ ハローウ\nマイ ティーチャー {PLAYER}{KUN}!\pきょうは ポケモンの どうぐに ついて\nアドバイスを おねがい したいんだ!\pおじさんの {STR_VAR_1}には\nどんな どうぐを もたせれば いいかな?\lパーっと きめちゃって くれ!"
	.byte EOS
	.if (. - gText_Rom_26F687) > 0x70
	.error "gText_Rom_26F687 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F687) < 0x70
	.space 0x70 - (. - gText_Rom_26F687)
	.endif
