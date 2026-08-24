	@ data/maps/Route110_TrickHouseEnd/scripts.inc:253 Route110_TrickHouseEnd_Text_AllNightToPlantTrees
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_23DABE
gText_Rom_23DABE: @ 0x0823DABE
	.string "てつやで きを うえたのに……\pわがはいの つぎの つぎの つぎの つぎの\nつぎの つぎ くらいに すごい!"
	.byte EOS
	.if (. - gText_Rom_23DABE) != 0x37
	.error "gText_Rom_23DABE must retain its original byte length"
	.endif
	.globl gText_Rom_23DAF0
	.set gText_Rom_23DAF0, gText_Rom_23DABE + 0x32
	@ data/maps/Route110_TrickHouseEnd/scripts.inc:256 Route110_TrickHouseEnd_Text_AllNightToMakeMaze
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_23DAF5
gText_Rom_23DAF5: @ 0x0823DAF5
	.string "てつやで めいろを つくったのに……\pわがはいの つぎの つぎの つぎの つぎの\nつぎ くらいに すごい!"
	.byte EOS
	.if (. - gText_Rom_23DAF5) != 0x36
	.error "gText_Rom_23DAF5 must retain its original byte length"
	.endif
	.globl gText_Rom_23DB26
	.set gText_Rom_23DB26, gText_Rom_23DAF5 + 0x31
	@ data/maps/Route110_TrickHouseEnd/scripts.inc:259 Route110_TrickHouseEnd_Text_AllNightToPreparePanels
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_23DB2B
gText_Rom_23DB2B: @ 0x0823DB2B
	.string "てつやで ふすまを はりかえたのに……\pわがはいの つぎの つぎの つぎの つぎ\nくらいに すごい!"
	.byte EOS
	.if (. - gText_Rom_23DB2B) != 0x33
	.error "gText_Rom_23DB2B must retain its original byte length"
	.endif
	.globl gText_Rom_23DB59
	.set gText_Rom_23DB59, gText_Rom_23DB2B + 0x2e
	@ data/maps/Route110_TrickHouseEnd/scripts.inc:262 Route110_TrickHouseEnd_Text_AllNightToShoveBoulders
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_23DB5E
gText_Rom_23DB5E: @ 0x0823DB5E
	.string "てつやで いわを おして きたのに……\pわがはいの つぎの つぎの つぎ\nくらいに すごい!"
	.byte EOS
	.if (. - gText_Rom_23DB5E) != 0x2f
	.error "gText_Rom_23DB5E must retain its original byte length"
	.endif
	.globl gText_Rom_23DB88
	.set gText_Rom_23DB88, gText_Rom_23DB5E + 0x2a
	@ data/maps/Route110_TrickHouseEnd/scripts.inc:265 Route110_TrickHouseEnd_Text_AllNightToMakeMechadolls
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_23DB8D
gText_Rom_23DB8D: @ 0x0823DB8D
	.string "てつやで にんぎょう つくって\nてつやで クイズも かんがえたのに……\pわがはいの つぎの つぎ\nくらいに すごい!"
	.byte EOS
	.if (. - gText_Rom_23DB8D) != 0x3b
	.error "gText_Rom_23DB8D must retain its original byte length"
	.endif
	.globl gText_Rom_23DBC3
	.set gText_Rom_23DBC3, gText_Rom_23DB8D + 0x36
	@ data/maps/Route110_TrickHouseEnd/scripts.inc:268 Route110_TrickHouseEnd_Text_AllNightToInstallDoors
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_23DBC8
gText_Rom_23DBC8: @ 0x0823DBC8
	.string "てつやで とびらを とりつけたのに……\pわがはいの つぎ\nくらいに すごい!"
	.byte EOS
	.if (. - gText_Rom_23DBC8) != 0x27
	.error "gText_Rom_23DBC8 must retain its original byte length"
	.endif
	.globl gText_Rom_23DBEA
	.set gText_Rom_23DBEA, gText_Rom_23DBC8 + 0x22
	@ data/maps/Route110_TrickHouseEnd/scripts.inc:271 Route110_TrickHouseEnd_Text_AllNightSettingUpArrows
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_23DBEF
gText_Rom_23DBEF: @ 0x0823DBEF
	.string "てつやで やじるしを ならべたのに……\pわがはいと おなじ くらい すごい!"
	.byte EOS
	.if (. - gText_Rom_23DBEF) != 0x27
	.error "gText_Rom_23DBEF must retain its original byte length"
	.endif
	.globl gText_Rom_23DC11
	.set gText_Rom_23DC11, gText_Rom_23DBEF + 0x22
	@ data/maps/Route110_TrickHouseEnd/scripts.inc:274 Route110_TrickHouseEnd_Text_AllNightPolishingFloors
	.globl gText_Rom_23DC16
gText_Rom_23DC16: @ 0x0823DC16
	.string "てつやで ゆかを みがいたのに……\pわがはい より すごい! のかも……"
	.byte EOS
	.if (. - gText_Rom_23DC16) > 0x25
	.error "gText_Rom_23DC16 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23DC16) < 0x25
	.space 0x25 - (. - gText_Rom_23DC16)
	.endif
