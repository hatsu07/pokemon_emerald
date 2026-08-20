	@ data/maps/Route109/scripts.inc:512 Route109_Text_WereGoingToMakeBigCastle
	.globl gText_Rom_1E8CE5
gText_Rom_1E8CE5: @ 0x081E8CE5
	.string "すなはまの すなを ぜーんぶ あつめて\nおっきな おしろを つくるの\pそれで あたしたち\nおうさまと おうじょさまに なるの\p{STR_VAR_1}は\nけらいに してあげるね{EOS}"
	.if (. - gText_Rom_1E8CE5) > 0x4f
	.error "gText_Rom_1E8CE5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E8CE5) < 0x4f
	.space 0x4f - (. - gText_Rom_1E8CE5)
	.endif
