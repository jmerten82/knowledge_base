# The Ecosystem around GPT, from 1 to 3.5 and ChatGPT.
This was especially inspired by two factors:

1. The rise of rise of [ChatGPT](https://chat.openai.com/chat).
2. [This amazing repo](https://github.com/karpathy/minGPT) by Andrej Karpathy, which implements an educational, minimal version of the GPT language model. 

## Basic references 
GPT is developed by OpenAI and not eerything about the models is public. However, there are some basic papers which lead to the current state of [GPT](https://openai.com/blog/chatgpt/).

1. [Improving Language Understanding
by Generative Pre-Training](https://cdn.openai.com/research-covers/language-unsupervised/language_understanding_paper.pdf) 
2. [Language Models are Unsupervised Multitask Learners
](https://paperswithcode.com/paper/language-models-are-unsupervised-multitask)
3. [Language Models are Few-Shot Learners](https://arxiv.org/abs/2005.14165)
4. [Generative Pretraining from Pixels](https://paperswithcode.com/paper/generative-pretraining-from-pixels)
5. [Training language models to follow instructions with human feedback
](https://arxiv.org/abs/2203.02155)

Also, since GPT is a Transformer-based model, this thorough Transformer introduction by DeepMind could be of interest:

[Phuong et al. (2022): Formal Algorithms for Transformers](https://arxiv.org/abs/2207.09238)

The tone of this paper is actually slightly irritating since it mentions at least one time to often that Pseudocode is very important. However, it gives a nice concise overview on what transformers are, how they are trained and what they predict. It also covers the big language models such as BERT and GPT. 

If you want to go even deeper, there is of course the ultimate reference to the multi-headed attention architecture which is underlying most large language models (LLM):

[Attention Is All You Need](https://arxiv.org/abs/1706.03762).

Finally, it is worth mentioning here that the large language models (LLM) are trained by predicting sequences. Hence, similar archtiectures can be used for any sequence forecasting task, as neatly shown here by MSFT

[SASRec & SSEPT | Sequential Recommendation Using Transformer](https://github.com/microsoft/recommenders/blob/main/examples/00_quick_start/sasrec_amazon.ipynb)

which is part of MSFT's excellent Recommender RePo

[Recommenders](https://github.com/microsoft/recommenders)



## The Karpathy Repo
This is a minimal and instructive implementation of the GPT language model. What GPT exactly does is best explained by ChatGPT itself:

`GPT (short for "Generative Pre-training Transformer") is a type of language model developed by OpenAI. It is a machine learning model that is trained to generate human-like text. It is designed to predict the next word in a sequence given the words that come before it.`

`The goal of GPT is to generate high-quality natural language text that is coherent and fluent. It can be used for a variety of tasks, such as language translation, summarization, dialogue generation, and text generation.`

`GPT is trained using a large dataset of text, such as books, articles, and websites. It uses this data to learn the statistical patterns and structures of the language, and uses this knowledge to generate new text that is similar to the training data.`

`The main advantage of GPT is that it can generate realistic and coherent text without being explicitly programmed to do so. This makes it a powerful tool for tasks that require the generation of human-like text, such as chatbots, language translation, and content creation.`

In the meanwhile, Karpathy has written a new Repo which is this one

[nanoGPT](https://github.com/karpathy/nanoGPT)

Unfortunately, it does not contain a propoer data loader, as of yet, but it is even more intuitive.

# And here comes an answer from FAIR

[LLaMa](https://github.com/facebookresearch/llama)

which is the LLM from Facebook. Most recently, Stanford released Alpaca and fine-tuned it to reach the performace of GPT-3.5:

[Alpaca](https://github.com/tatsu-lab/stanford_alpaca)

Most exciting paper dealing with GPT-4 disruption

[Bubeck et al. 2023: Sparks of Artificial General Intelligence: Early experiments with GPT-4](https://arxiv.org/abs/2303.12712)



