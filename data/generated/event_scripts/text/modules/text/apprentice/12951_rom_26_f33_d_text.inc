	@ data/text/apprentice.inc:343 gText_ApprenticeItemAlreadyRecommended6
	.globl gText_Rom_26F33D
gText_Rom_26F33D: @ 0x0826F33D
	.string "あっはは やだぁ\n{STR_VAR_1}は もう\lおしえて もらった じゃない!\l{PLAYER}さん だいじょぶ?\pあ! それとも {STR_VAR_2}は\nもちものは いらないって ことかな?"
	.byte EOS
	.if (. - gText_Rom_26F33D) > 0x4b
	.error "gText_Rom_26F33D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F33D) < 0x4b
	.space 0x4b - (. - gText_Rom_26F33D)
	.endif
