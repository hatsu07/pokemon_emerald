	@ data/text/trainers.inc:2357 Route121_Text_CristinPostRematch
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25F818
gText_Rom_25F818: @ 0x0825F818
	.string "こんなに かてない あいてが いるなんて……\nグスっ しんじられない{EOS}"
	.if (. - gText_Rom_25F818) != 0x23
	.error "gText_Rom_25F818 must retain its original byte length"
	.endif
