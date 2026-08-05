	@ data/text/apprentice.inc:124 gText_ApprenticeRejectTeaching6
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_26DA73
gText_Rom_26DA73: @ 0x0826DA73
	.string "あははは! そんな いじわる いっても\nあたし には つうじないわよん!\lほんとは オーケー なんでしょ?"
	.byte EOS
	.if (. - gText_Rom_26DA73) != 0x36
	.error "gText_Rom_26DA73 must retain its original byte length"
	.endif
