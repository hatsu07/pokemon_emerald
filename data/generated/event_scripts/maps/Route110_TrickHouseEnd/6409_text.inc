	@ data/maps/Route110_TrickHouseEnd/scripts.inc:250 Route110_TrickHouseEnd_Text_YouveMadeItToMe
	.globl Route110_TrickHouseEnd_Text_YouveMadeItToMe
Route110_TrickHouseEnd_Text_YouveMadeItToMe: @ 0x0823DA9E
	.string "あっ!\nあんた ここまで こられたのか!\lうーむ…… できる!"
	.byte EOS
	.if (. - Route110_TrickHouseEnd_Text_YouveMadeItToMe) > 0x20
	.error "Route110_TrickHouseEnd_Text_YouveMadeItToMe may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHouseEnd_Text_YouveMadeItToMe) < 0x20
	.space 0x20 - (. - Route110_TrickHouseEnd_Text_YouveMadeItToMe)
	.endif
	@ data/maps/Route110_TrickHouseEnd/scripts.inc:253 Route110_TrickHouseEnd_Text_AllNightToPlantTrees
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route110_TrickHouseEnd_Text_AllNightToPlantTrees
Route110_TrickHouseEnd_Text_AllNightToPlantTrees: @ 0x0823DABE
	.string "てつやで きを うえたのに……\pわがはいの つぎの つぎの つぎの つぎの\nつぎの つぎ くらいに すごい!"
	.byte EOS
	.if (. - Route110_TrickHouseEnd_Text_AllNightToPlantTrees) != 0x37
	.error "Route110_TrickHouseEnd_Text_AllNightToPlantTrees must retain its original byte length"
	.endif
	.globl gText_Rom_23DAF0
	.set gText_Rom_23DAF0, Route110_TrickHouseEnd_Text_AllNightToPlantTrees + 0x32
	@ data/maps/Route110_TrickHouseEnd/scripts.inc:256 Route110_TrickHouseEnd_Text_AllNightToMakeMaze
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route110_TrickHouseEnd_Text_AllNightToMakeMaze
Route110_TrickHouseEnd_Text_AllNightToMakeMaze: @ 0x0823DAF5
	.string "てつやで めいろを つくったのに……\pわがはいの つぎの つぎの つぎの つぎの\nつぎ くらいに すごい!"
	.byte EOS
	.if (. - Route110_TrickHouseEnd_Text_AllNightToMakeMaze) != 0x36
	.error "Route110_TrickHouseEnd_Text_AllNightToMakeMaze must retain its original byte length"
	.endif
	.globl gText_Rom_23DB26
	.set gText_Rom_23DB26, Route110_TrickHouseEnd_Text_AllNightToMakeMaze + 0x31
	@ data/maps/Route110_TrickHouseEnd/scripts.inc:259 Route110_TrickHouseEnd_Text_AllNightToPreparePanels
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route110_TrickHouseEnd_Text_AllNightToPreparePanels
Route110_TrickHouseEnd_Text_AllNightToPreparePanels: @ 0x0823DB2B
	.string "てつやで ふすまを はりかえたのに……\pわがはいの つぎの つぎの つぎの つぎ\nくらいに すごい!"
	.byte EOS
	.if (. - Route110_TrickHouseEnd_Text_AllNightToPreparePanels) != 0x33
	.error "Route110_TrickHouseEnd_Text_AllNightToPreparePanels must retain its original byte length"
	.endif
	.globl gText_Rom_23DB59
	.set gText_Rom_23DB59, Route110_TrickHouseEnd_Text_AllNightToPreparePanels + 0x2e
	@ data/maps/Route110_TrickHouseEnd/scripts.inc:262 Route110_TrickHouseEnd_Text_AllNightToShoveBoulders
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route110_TrickHouseEnd_Text_AllNightToShoveBoulders
Route110_TrickHouseEnd_Text_AllNightToShoveBoulders: @ 0x0823DB5E
	.string "てつやで いわを おして きたのに……\pわがはいの つぎの つぎの つぎ\nくらいに すごい!"
	.byte EOS
	.if (. - Route110_TrickHouseEnd_Text_AllNightToShoveBoulders) != 0x2f
	.error "Route110_TrickHouseEnd_Text_AllNightToShoveBoulders must retain its original byte length"
	.endif
	.globl gText_Rom_23DB88
	.set gText_Rom_23DB88, Route110_TrickHouseEnd_Text_AllNightToShoveBoulders + 0x2a
	@ data/maps/Route110_TrickHouseEnd/scripts.inc:265 Route110_TrickHouseEnd_Text_AllNightToMakeMechadolls
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route110_TrickHouseEnd_Text_AllNightToMakeMechadolls
Route110_TrickHouseEnd_Text_AllNightToMakeMechadolls: @ 0x0823DB8D
	.string "てつやで にんぎょう つくって\nてつやで クイズも かんがえたのに……\pわがはいの つぎの つぎ\nくらいに すごい!"
	.byte EOS
	.if (. - Route110_TrickHouseEnd_Text_AllNightToMakeMechadolls) != 0x3b
	.error "Route110_TrickHouseEnd_Text_AllNightToMakeMechadolls must retain its original byte length"
	.endif
	.globl gText_Rom_23DBC3
	.set gText_Rom_23DBC3, Route110_TrickHouseEnd_Text_AllNightToMakeMechadolls + 0x36
	@ data/maps/Route110_TrickHouseEnd/scripts.inc:268 Route110_TrickHouseEnd_Text_AllNightToInstallDoors
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route110_TrickHouseEnd_Text_AllNightToInstallDoors
Route110_TrickHouseEnd_Text_AllNightToInstallDoors: @ 0x0823DBC8
	.string "てつやで とびらを とりつけたのに……\pわがはいの つぎ\nくらいに すごい!"
	.byte EOS
	.if (. - Route110_TrickHouseEnd_Text_AllNightToInstallDoors) != 0x27
	.error "Route110_TrickHouseEnd_Text_AllNightToInstallDoors must retain its original byte length"
	.endif
	.globl gText_Rom_23DBEA
	.set gText_Rom_23DBEA, Route110_TrickHouseEnd_Text_AllNightToInstallDoors + 0x22
	@ data/maps/Route110_TrickHouseEnd/scripts.inc:271 Route110_TrickHouseEnd_Text_AllNightSettingUpArrows
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route110_TrickHouseEnd_Text_AllNightSettingUpArrows
Route110_TrickHouseEnd_Text_AllNightSettingUpArrows: @ 0x0823DBEF
	.string "てつやで やじるしを ならべたのに……\pわがはいと おなじ くらい すごい!"
	.byte EOS
	.if (. - Route110_TrickHouseEnd_Text_AllNightSettingUpArrows) != 0x27
	.error "Route110_TrickHouseEnd_Text_AllNightSettingUpArrows must retain its original byte length"
	.endif
	.globl gText_Rom_23DC11
	.set gText_Rom_23DC11, Route110_TrickHouseEnd_Text_AllNightSettingUpArrows + 0x22
	@ data/maps/Route110_TrickHouseEnd/scripts.inc:274 Route110_TrickHouseEnd_Text_AllNightPolishingFloors
	.globl Route110_TrickHouseEnd_Text_AllNightPolishingFloors
Route110_TrickHouseEnd_Text_AllNightPolishingFloors: @ 0x0823DC16
	.string "てつやで ゆかを みがいたのに……\pわがはい より すごい! のかも……"
	.byte EOS
	.if (. - Route110_TrickHouseEnd_Text_AllNightPolishingFloors) > 0x25
	.error "Route110_TrickHouseEnd_Text_AllNightPolishingFloors may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHouseEnd_Text_AllNightPolishingFloors) < 0x25
	.space 0x25 - (. - Route110_TrickHouseEnd_Text_AllNightPolishingFloors)
	.endif
