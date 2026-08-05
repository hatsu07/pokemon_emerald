	@ data/text/apprentice.inc:232 gText_ApprenticeRejectTeaching15
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_26E96B
gText_Rom_26E96B: @ 0x0826E96B
	.string "え? なぜ ことわるのかね?\pほんものか どうか うたがって わるかった\nあやまるから でしいり させてほしい"
	.byte EOS
	.if (. - gText_Rom_26E96B) != 0x38
	.error "gText_Rom_26E96B must retain its original byte length"
	.endif
