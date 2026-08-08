	@ data/maps/DewfordTown/scripts.inc:666 DewfordTown_Text_JustTellMeWhenYouNeedToSetSail (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1E52CD
gText_Rom_1E52CD: @ 0x081E52CD
	.string "ハギ『ふねに のる ひつようが あるときは\nいつでも こえを かけておくれ$"
	.if (. - gText_Rom_1E52CD) != 0x26
	.error "gText_Rom_1E52CD must retain its original byte length"
	.endif
