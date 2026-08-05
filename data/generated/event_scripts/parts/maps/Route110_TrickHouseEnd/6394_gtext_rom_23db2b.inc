	@ data/maps/Route110_TrickHouseEnd/scripts.inc:259 Route110_TrickHouseEnd_Text_AllNightToPreparePanels
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_23DB2B
gText_Rom_23DB2B: @ 0x0823DB2B
	.string "てつやで ふすまを はりかえたのに……\pわがはいの つぎの つぎの つぎの つぎ\nくらいに すごい!"
	.byte EOS
	.if (. - gText_Rom_23DB2B) != 0x33
	.error "gText_Rom_23DB2B must retain its original byte length"
	.endif
