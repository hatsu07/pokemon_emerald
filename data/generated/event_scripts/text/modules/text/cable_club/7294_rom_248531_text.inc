	@ data/text/cable_club.inc:253 CableClub_Text_ExplainBattleModes
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_248531
gText_Rom_248531: @ 0x08248531
	.string "たいせんには 3しゅるいの\nモードが あります\pシングルバトルは たたかいの ばに\nポケモンを 1ひきだして\lふたりで たいせんします\pダブルバトルは たたかいの ばに\nポケモンを 2ひきずつ だして\lふたりで たいせんします\pマルチバトルは たたかいの ばに\n4にんで ポケモンを 1ひきずつ\lだして 2たい2で たいせんします$"
	.if (. - gText_Rom_248531) != 0xa6
	.error "gText_Rom_248531 must retain its original byte length"
	.endif
