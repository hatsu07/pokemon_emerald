	@ data/text/apprentice.inc:37 gText_ApprenticeChallenge12
	.globl gText_Rom_26CF05
gText_Rom_26CF05: @ 0x0826CF05
	.string "イヤハァ! {STR_VAR_1}さんの\n{STR_VAR_2}ばんの でしとは オレのことっ!"
	.byte EOS
	.if (. - gText_Rom_26CF05) > 0x1f
	.error "gText_Rom_26CF05 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26CF05) < 0x1f
	.space 0x1f - (. - gText_Rom_26CF05)
	.endif
