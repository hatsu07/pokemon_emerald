	.globl gText_Rom_5CC399
	.set gText_Rom_5CC399, gText_UnionTradesAndBattles + 0x9
	.globl gText_Rom_5CC39E

	@ src/data/script_menu.h:507 gText_BerryCrush3 (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC39E
gText_Rom_5CC39E: @ 0x085CC39E
	.string "きのみクラッシュ{EOS}"
	.if (. - gText_Rom_5CC39E) != 0x9
	.error "gText_Rom_5CC39E must retain its original byte length"
	.endif
	.globl gText_Rom_5CC3A1
	.set gText_Rom_5CC3A1, gText_Rom_5CC39E + 0x3
	.globl gText_WaitingTrainerFinishReading

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
