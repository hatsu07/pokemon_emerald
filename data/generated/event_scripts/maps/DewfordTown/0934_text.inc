	@ data/maps/DewfordTown/scripts.inc:666 DewfordTown_Text_JustTellMeWhenYouNeedToSetSail (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1E8C2A
gText_Rom_1E8C2A: @ 0x081E8C2A
	.string "ハギ『ふねに のる ひつようが あるときは\nいつでも こえを かけておくれ$"
	.if (. - gText_Rom_1E8C2A) != 0x26
	.error "gText_Rom_1E8C2A must retain its original byte length"
	.endif
