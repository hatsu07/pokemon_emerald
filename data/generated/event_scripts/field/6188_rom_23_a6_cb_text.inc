	@ field-script:0x23A2E6 FieldScriptText_23A6CB
	.globl gText_Rom_23A6CB
gText_Rom_23A6CB: @ 0x0823A6CB
	.string "うけつけ『あっ　エニシダさま！\nおつかれさまです！"
	.byte EOS
	.if (. - gText_Rom_23A6CB) > 0x1a
	.error "gText_Rom_23A6CB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23A6CB) < 0x1a
	.space 0x1a - (. - gText_Rom_23A6CB)
	.endif
