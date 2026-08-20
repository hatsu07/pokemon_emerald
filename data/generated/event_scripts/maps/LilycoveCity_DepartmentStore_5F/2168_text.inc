	@ data/maps/LilycoveCity_DepartmentStore_5F/scripts.inc:148 LilycoveCity_DepartmentStore_5F_Text_GettingDollInsteadOfPokemon
	.globl gText_Rom_20ADD5
gText_Rom_20ADD5: @ 0x0820ADD5
	.string "あたし まだ ポケモン そだてられないから\nかわいい ぬいぐるみ かってもらうの{EOS}"
	.if (. - gText_Rom_20ADD5) > 0x29
	.error "gText_Rom_20ADD5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20ADD5) < 0x29
	.space 0x29 - (. - gText_Rom_20ADD5)
	.endif
