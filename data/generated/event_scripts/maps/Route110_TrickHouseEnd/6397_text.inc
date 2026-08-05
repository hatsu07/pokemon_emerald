	@ data/maps/Route110_TrickHouseEnd/scripts.inc:262 Route110_TrickHouseEnd_Text_AllNightToShoveBoulders
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_23DB5E
gText_Rom_23DB5E: @ 0x0823DB5E
	.string "てつやで いわを おして きたのに……\pわがはいの つぎの つぎの つぎ\nくらいに すごい!"
	.byte EOS
	.if (. - gText_Rom_23DB5E) != 0x2f
	.error "gText_Rom_23DB5E must retain its original byte length"
	.endif
