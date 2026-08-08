	@ data/maps/Route110_TrickHouseEnd/scripts.inc:271 Route110_TrickHouseEnd_Text_AllNightSettingUpArrows
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_23DBEF
gText_Rom_23DBEF: @ 0x0823DBEF
	.string "てつやで やじるしを ならべたのに……\pわがはいと おなじ くらい すごい!"
	.byte EOS
	.if (. - gText_Rom_23DBEF) != 0x27
	.error "gText_Rom_23DBEF must retain its original byte length"
	.endif
