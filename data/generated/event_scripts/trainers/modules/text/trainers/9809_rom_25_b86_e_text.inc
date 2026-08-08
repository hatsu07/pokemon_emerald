	@ data/text/trainers.inc:851 Route110_Text_IsabelPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25B86E
gText_Rom_25B86E: @ 0x0825B86E
	.string "しょうぶ させるよりも\nだいすきクラブで じまんして こようかしら$"
	.if (. - gText_Rom_25B86E) != 0x22
	.error "gText_Rom_25B86E must retain its original byte length"
	.endif
