choice_attr
~~~~~~~~~~~

**type**: ``array``, ``callable`` or ``string`` **default**: ``array()``

Use this to add additional HTML attributes to each choice. This can be an array
of attributes (if they are the same for each choice), a callable or a property path
(just like `choice_label`_).

If an array, the keys of the ``choices`` array must be used as keys::

    use Symfony\Component\Form\Extension\Core\Type\ChoiceType;
    // ...

    $builder->add('attending', ChoiceType::class, array(
        'choices' => array(
            'Yes' => true,
            'No' => false,
            'Maybe' => null,
        ),
        'choice_attr' => function($val, $key, $index) {
            // adds a class like attending_yes, attending_no, etc
            return ['class' => 'attending_'.strtolower($key)];
        },
    ));
