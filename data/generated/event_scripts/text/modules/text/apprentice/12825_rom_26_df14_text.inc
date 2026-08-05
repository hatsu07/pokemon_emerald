	@ data/text/apprentice.inc:157 gText_ApprenticePleaseTeach9
	.globl gText_Rom_26DF14
gText_Rom_26DF14: @ 0x0826DF14
	.string "ワォ! きみは\nもしや もしや {PLAYER}{KUN}!\lストロングで フェイマスな トレーナー!\lいや おじさん ラッキーだなー!\pハロウ おじさんは {STR_VAR_1}ね!\nポケモン ティーチャー さがしてるんだ\lそんな ときに グッドタイミングで\l{PLAYER}{KUN}が あらわれた!\pと いうわけで {PLAYER}{KUN}!\nおじさんを でしいり させて くれ!"
	.byte EOS
	.if (. - gText_Rom_26DF14) > 0x9f
	.error "gText_Rom_26DF14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26DF14) < 0x9f
	.space 0x9f - (. - gText_Rom_26DF14)
	.endif
