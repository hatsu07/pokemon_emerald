	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:197 LilycoveCity_LilycoveMuseum_Text_BirdPokemonSculptureReplica
	.globl gText_Rom_205F90
gText_Rom_205F90: @ 0x08205F90
	.string "こだいの とりポケモンを ほった\nゆうめいな ちょうこくの レプリカだ!{EOS}"
	.if (. - gText_Rom_205F90) > 0x25
	.error "gText_Rom_205F90 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205F90) < 0x25
	.space 0x25 - (. - gText_Rom_205F90)
	.endif
