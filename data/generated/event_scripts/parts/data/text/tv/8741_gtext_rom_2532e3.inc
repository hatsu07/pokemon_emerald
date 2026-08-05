	@ data/text/tv.inc:1150 GabbyAndTy_Text_TyPreFirstBattle (+1 aliases)
	.globl gText_Rom_2532E3
gText_Rom_2532E3: @ 0x082532E3
	.string "ダイ『おっ こんなところに\nつよそうな トレーナー はっけん!\lさっそく ろくが かいしだ!"
	.byte EOS
	.if (. - gText_Rom_2532E3) > 0x2f
	.error "gText_Rom_2532E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2532E3) < 0x2f
	.space 0x2f - (. - gText_Rom_2532E3)
	.endif
