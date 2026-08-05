	@ data/text/apprentice.inc:100 gText_ApprenticeRejectTeaching4
	.globl gText_Rom_26D72E
gText_Rom_26D72E: @ 0x0826D72E
	.string "え? なんで ことわるの?\nあたしの おねがい なんだけど!\lかんがえなおしてよぉ!"
	.byte EOS
	.if (. - gText_Rom_26D72E) > 0x2b
	.error "gText_Rom_26D72E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D72E) < 0x2b
	.space 0x2b - (. - gText_Rom_26D72E)
	.endif
