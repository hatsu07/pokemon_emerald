	@ data/text/trainers.inc:1838 Route117_Text_BrandiPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25E29E
gText_Rom_25E29E: @ 0x0825E29E
	.string "エスパーポケモンは おくが ふかいの\nあなたも つかまえて ごらんなさい$"
	.if (. - gText_Rom_25E29E) != 0x25
	.error "gText_Rom_25E29E must retain its original byte length"
	.endif
