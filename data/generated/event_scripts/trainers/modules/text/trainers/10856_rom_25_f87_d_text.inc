	@ data/text/trainers.inc:2366 Route121_Text_CalePostBattle
	.globl gText_Rom_25F87D
gText_Rom_25F87D: @ 0x0825F87D
	.string "この さきの ミナモデパートで\nかいもの しすぎたんだ!\lきみの みたいな バッグが ほしいな{EOS}"
	.if (. - gText_Rom_25F87D) > 0x30
	.error "gText_Rom_25F87D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F87D) < 0x30
	.space 0x30 - (. - gText_Rom_25F87D)
	.endif
