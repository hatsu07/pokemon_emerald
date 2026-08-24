	@ src/strings.c:686 gText_WaitingTrainerFinishReading
	.globl gText_WaitingTrainerFinishReading
gText_WaitingTrainerFinishReading: @ 0x085CC3A7
	.string "あいてが カードを みおわるのを\nまっています{EOS}"
	.if (. - gText_WaitingTrainerFinishReading) > 0x18
	.error "gText_WaitingTrainerFinishReading may not grow beyond its original slot"
	.endif
	.if (. - gText_WaitingTrainerFinishReading) < 0x18
	.space 0x18 - (. - gText_WaitingTrainerFinishReading)
	.endif

	@ src/strings.c:687 gText_PokeblocksWithFriends
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_PokeblocksWithFriends
gText_PokeblocksWithFriends: @ 0x085CC3BF
	.string "ともだちと つくった ポロック{EOS}"
	.if (. - gText_PokeblocksWithFriends) != 0x10
	.error "gText_PokeblocksWithFriends must retain its original byte length"
	.endif
