	@ src/strings.c:568 gText_TheTrainersImage
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB9ED
gText_Rom_5CB9ED: @ 0x085CB9ED
	.string "ぴったりの ことばを みつけよう!{EOS}"
	.if (. - gText_Rom_5CB9ED) != 0x12
	.error "gText_Rom_5CB9ED must retain its original byte length"
	.endif
