	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1103 BattleFrontier_BattleTowerLobby_Text_ChoseSameMonAsFriend
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2216BD
gText_Rom_2216BD: @ 0x082216BD
	.string "ともだちと\nおなじ ポケモンを えらんでいます!\pともだちの ポケモンと\nちがう しゅるいの ポケモンを\l2ひき えらび\lさんかする レベルを あわせて\lとうろくを やりなおして ください!"
	.byte EOS
	.if (. - gText_Rom_2216BD) != 0x60
	.error "gText_Rom_2216BD must retain its original byte length"
	.endif
