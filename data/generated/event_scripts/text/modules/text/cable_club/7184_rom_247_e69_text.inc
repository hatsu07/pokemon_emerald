	@ data/text/cable_club.inc:81 Text_TerminateLinkPleaseWait
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_247E69
gText_Rom_247E69: @ 0x08247E69
	.string "つうしんを しゅうりょう します\nしばらく おまちください$"
	.if (. - gText_Rom_247E69) != 0x1e
	.error "gText_Rom_247E69 must retain its original byte length"
	.endif
