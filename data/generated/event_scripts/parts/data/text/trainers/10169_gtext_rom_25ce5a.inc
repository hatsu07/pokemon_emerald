	@ data/text/trainers.inc:1370 Route114_Text_ClaudePostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25CE5A
gText_Rom_25CE5A: @ 0x0825CE5A
	.string "りゅうせいのたきで\nおおものでも つると しようかな\lあそこの たきには なにか いそうだからね$"
	.if (. - gText_Rom_25CE5A) != 0x31
	.error "gText_Rom_25CE5A must retain its original byte length"
	.endif
