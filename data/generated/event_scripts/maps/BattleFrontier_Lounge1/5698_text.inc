	@ data/maps/BattleFrontier_Lounge1/scripts.inc:211 BattleFrontier_Lounge1_Text_SaidMyMonIsOutstanding
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_235AB2
gText_Rom_235AB2: @ 0x08235AB2
	.string "ぼくの ポケモン すばらしいって!\nだいじに そだてて きてよかった!"
	.byte EOS
	.if (. - gText_Rom_235AB2) != 0x24
	.error "gText_Rom_235AB2 must retain its original byte length"
	.endif
