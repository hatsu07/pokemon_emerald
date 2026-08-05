	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:532 BattleFrontier_BattleDomeLobby_Text_BagFullMakeRoom
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_227873
gText_Rom_227873: @ 0x08227873
	.string "……あら どうぐが いっぱいですね\pどうぐを せいりしてから\nまたおこしください$"
	.if (. - gText_Rom_227873) != 0x29
	.error "gText_Rom_227873 must retain its original byte length"
	.endif
