	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:983 BattleFrontier_BattleTowerLobby_Text_DontThinkMuchAboutIt
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_22082B
gText_Rom_22082B: @ 0x0822082B
	.string "とくに なにも おもわないって こと?\nきみって クールなんだね"
	.byte EOS
	.if (. - gText_Rom_22082B) != 0x21
	.error "gText_Rom_22082B must retain its original byte length"
	.endif
