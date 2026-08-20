	@ data/maps/Route112/scripts.inc:117 Route112_Text_OhThatsWhyCrewWentToFallarbor
	.globl gText_Rom_1EB06C
gText_Rom_1EB06C: @ 0x081EB06C
	.string "ははーん それで さっき\nなかまが ハジツゲに むかったのか{EOS}"
	.if (. - gText_Rom_1EB06C) > 0x1f
	.error "gText_Rom_1EB06C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EB06C) < 0x1f
	.space 0x1f - (. - gText_Rom_1EB06C)
	.endif
